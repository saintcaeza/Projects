//Create 2 adjacent pyramid's with a space in-between them.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt the user for a positive integer between 1 and 8, inclusive; named "height".
    int height = 0;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    //Format and print both adjacent pyramid's according to size, width, space
    int width = 1;
    int space = height - 1;

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

        printf(" ");

        for (int l = 0; l < width; l++)
        {
             printf("#");
        }
        width ++;
        space --;
        printf("\n");
    }
}

       