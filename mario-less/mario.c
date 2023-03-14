#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("How tall should the pyramid be? \n");

    for (int i = 0, i < height, i++)
    {
        printf("#")
    }
}