#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //ask user for a positive integer 'height' of the pyramid
    int height = 0;
    switch (height)
    {
        case (height < 1):
            get_int("How tall should the pyramid be? ");
            break;
        case (height > 8):
            get_int("How tall should the pyramid be? ");
            break;
        default:
            get_int("How tall should the pyramid be? ");
            break;
    }
    /*
    do
    {
        height = get_int("How tall should the pyramid be? ");
    }
    while (height <= 8);
    printf("stored: %i\n", height);
*/
    //create a pyramid using the user input
    /*for (int i = 0; i < height; i++)
    {
        printf("#");
    }*/
}