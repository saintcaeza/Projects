#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("What is the number of llamas you presently have? ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("How many llamas do you wish to have? ");
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold

    int years = 0;

    while (start < end)
    {
        start = start + (start / 3) - (start / 4);
        years ++;
    }
    printf("Years: %i\n", years);
}