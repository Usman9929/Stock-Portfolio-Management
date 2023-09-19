#include "helpers.h"
#include "math.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j].rgbtGreen = round((image[i][j].rgbtGreen + image[i][j].rgbtBlue + image[i][j].rgbtRed) / 3.0);
            image[i][j].rgbtBlue = image[i][j].rgbtGreen;
            image[i][j].rgbtRed = image[i][j].rgbtGreen;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            //get values according to the given equasion.//

            int sepiaRed = round(.393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen + .189 * image[i][j].rgbtBlue);
            int sepiaGreen = round(.349 * image[i][j].rgbtRed + .686 * image[i][j].rgbtGreen + .168 * image[i][j].rgbtBlue);
            int sepiaBlue = round(.272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen + .131 * image[i][j].rgbtBlue);
            // update value for each color, the if checks if it exceeds 255 to cap the value to 255. //
            image[i][j].rgbtGreen = sepiaGreen;
            if (image[i][j].rgbtGreen > 255)
            {
                image[i][j].rgbtGreen = 255;
            }

            image[i][j].rgbtBlue = sepiaBlue;
            if (image[i][j].rgbtBlue > 255)
            {
                image[i][j].rgbtBlue = 255;
            }

            image[i][j].rgbtRed = sepiaRed;
            if (image[i][j].rgbtRed > 255)
            {
                image[i][j].rgbtRed = 255;
            }
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < (width / 2); j++)
        {
            RGBTRIPLE temp = image[i][j];
            image[i][j] = image[i][width - j - 1];
            image[i][width - j - 1] = temp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE copy[height][width];
    int blue = 0;
    int red = 0;
    int green = 0;
    int counter = 0;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            copy[i][j] = image[i][j];
        }
     }
     for (int i = 0; i < height; i++)
     {
        for (int j = 0; j < width; j++)
        {
            blue = 0;
            red = 0;
            green = 0;
            counter = 0;
            for (int s = i - 1; s < i + 2; s++)
            {
                for (int m = j - 1; m < j + 2; m++)
                {
                    //this condition will make sure if a grid is not in the loop it will not be included(handeling edgee case).//
                    if (s < 0 || m < 0 || s > height - 1 || m > width - 1)
                    {
                        continue;
                    }
                    else
                    {
                        blue += copy[s][m].rgbtBlue;
                        green += copy[s][m].rgbtGreen;
                        red += copy[s][m].rgbtRed;
                        counter++;
                    }
                }
            }
            image [i][j].rgbtBlue = round(blue / counter);
            image [i][j].rgbtGreen = round(green / counter);
            image [i][j].rgbtRed = round(red / counter);
        }
    }
    return;
}