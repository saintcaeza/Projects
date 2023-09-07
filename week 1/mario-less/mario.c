//Create a left-aligned pyramid using height
#include <cs50.h>
#include <stdio.h>

int pyramid(void);

int main(void)
{
    //Ask user for a positive integer 'height' of the pyramid
    int height;
    do
    {
        height = get_int("How tall should the pyramid be? ");
    }
    while (height < 1 || height > 8);

    //Determine's the width and spacing for the pyramid
    int width = 1;
    int space = height - 1;

    //Formats the height, width and spacing of the pyramd
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < width; k++)
        {
            printf("#");
        }
        width++;
        space--;
        printf("\n");
    }
}