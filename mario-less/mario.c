#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //ask user for a positive integer 'height' of the pyramid
    int height = 0;
    do
    {
        height = get_int("How tall should the pyramid be? ");
    }
    while (height < 9 && height > 0);
    printf("stored: %i\n", height);
}
    /*
    ;
*/
    //create a pyramid using the user input
    /*for (int i = 0; i < height; i++)
    {
        printf("#");
    }*/
