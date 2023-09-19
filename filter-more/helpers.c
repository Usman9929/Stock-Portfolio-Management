#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    int i = 0;
    while (i < height)
    {
        for (int j = 0; j < width; j++)
        {
            int rgbt = round((image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed) / 3.0);
            image[i][j].rgbtBlue = image[i][j].rgbtGreen = image[i][j].rgbtRed = rgbt;
        }
        i++;
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        if (width % 2 == 0)
        {
            int j = 0;
            while (j < width / 2)
            {
                RGBTRIPLE temp[height][width];
                temp[i][j] = image[i][j];
                image[i][j] = image[i][width - (j + 1)];
                image[i][width - (j + 1)] = temp[i][j];
                j++;
            }
        }
        else
        {
            for (int j = 0; j < (width - 1) / 2; j++)
            {
                RGBTRIPLE temp[height][width];
                temp[i][j] = image[i][j];
                image[i][j] = image[i][width - (j + 1)];
                image[i][width - (j + 1)] = temp[i][j];
            }
        }
    }

    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float s_Blue = 0;
            float s_Green = 0;
            float s_Red = 0;
            float counter = 0;

            for (int r = -1; r < 2; r++)
            {
                for (int c = -1; c < 2; c++)
                {
                    if (i + r < 0 || i + r > height - 1)
                    {
                        continue;
                    }

                    if (j + c < 0 || j + c > width - 1)
                    {
                        continue;
                    }

                    s_Blue += image[i + r][j + c].rgbtBlue;
                    s_Green += image[i + r][j + c].rgbtGreen;
                    s_Red += image[i + r][j + c].rgbtRed;
                    counter++;
                }
            }

            temp[i][j].rgbtBlue = round(s_Blue / counter);
            temp[i][j].rgbtGreen = round(s_Green / counter);
            temp[i][j].rgbtRed = round(s_Red / counter);
        }
    }

    for (int x = 0; x < height; x++)
    {
        for (int y = 0; y < width; y++)
        {
            image[x][y].rgbtBlue = temp[x][y].rgbtBlue;
            image[x][y].rgbtGreen = temp[x][y].rgbtGreen;
            image[x][y].rgbtRed = temp[x][y].rgbtRed;
        }
    }

    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];

    int gx[3][3] = {{-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1}};
    int gy[3][3] = {{-1, -2, -1}, {0, 0, 0}, {1, 2, 1}};

    for (int i = 0; i < height; i++)
    {
        int j = 0;
        while (j < width)
        {
            int gx_Blue = 0;
            int gy_Blue = 0;
            int gx_Green = 0;
            int gy_Green = 0;
            int gx_Red = 0;
            int gy_Red = 0;

            for (int a = -1; a < 2; a++)
            {
                for (int k = -1; k < 2; k++)
                {
                    if (i + a < 0 || i + a > height - 1)
                    {
                        continue;
                    }
                    if (j + k < 0 || j + k > width - 1)
                    {
                        continue;
                    }

                    gx_Blue += image[i + a][j + k].rgbtBlue * gx[a + 1][k + 1];
                    gy_Blue += image[i + a][j + k].rgbtBlue * gy[a + 1][k + 1];
                    gx_Green += image[i + a][j + k].rgbtGreen * gx[a + 1][k + 1];

                    gy_Green += image[i + a][j + k].rgbtGreen * gy[a + 1][k + 1];
                    gx_Red += image[i + a][j + k].rgbtRed * gx[a + 1][k + 1];
                    gy_Red += image[i + a][j + k].rgbtRed * gy[a + 1][k + 1];
                }
            }

            int newb = round(sqrt(gx_Blue * gx_Blue + gy_Blue * gy_Blue));
            int newg = round(sqrt(gx_Green * gx_Green + gy_Green * gy_Green));
            int newr = round(sqrt(gx_Red * gx_Red + gy_Red * gy_Red));

            temp[i][j].rgbtBlue = (newb > 255) ? 255 : newb;
            temp[i][j].rgbtGreen = (newg > 255) ? 255 : newg;
            temp[i][j].rgbtRed = (newr > 255) ? 255 : newr;
            j++;
        }
    }

    for (int c = 0; c < height; c++)
    {
        int q = 0;
        while (q < width)
        {
            image[c][q].rgbtBlue = temp[c][q].rgbtBlue;
            image[c][q].rgbtGreen = temp[c][q].rgbtGreen;
            image[c][q].rgbtRed = temp[c][q].rgbtRed;
            q++;
        }
    }

    return;
}