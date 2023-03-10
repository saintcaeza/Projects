#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int ("start size: \n");
    }
    while(start < 9);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("end size: \n");
    }
    while(end < start);

    // TODO: Calculate number of years until we reach threshold
    int years = 0
    while(start < end)
    {
        start += start / 3
        start -= start / 4
        year ++
    }

    // TODO: Print number of years
    printf("Years: %i. \n, years)
}