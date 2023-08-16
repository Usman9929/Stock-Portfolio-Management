#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Change all black pixels to a color of your choosing
    int r = 0;
    // Loop for to check the rows.
    while (r < width)
    {
        // Loop for to check the coloum.
        for (int c = 0; c < height; c++)
        {
            // Check the pixel that they are black if black then we change the color to our choosing.
            if (image[c][r].rgbtBlue == 0 && image[c][r].rgbtGreen == 0 && image[c][r].rgbtRed == 0)
            {
                image[c][r].rgbtBlue = 15; // For Blue.
                image[c][r].rgbtGreen = 196; // For Green.
                image[c][r].rgbtRed = 241; // For Red.
            }
        }
        r++;
    }
}
