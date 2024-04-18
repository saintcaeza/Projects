#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

void collatz(int n, int score);

int main (void)
{
    int score = 0;
    int n = get_int("what's the int: \n");

    if (n == 1)
        printf("The number of steps to get to 1 is %d.\n", score);
    else
        do
        {
            collatz(n, score);
        } while (n != 1);

    printf("The number of steps to get to 1 is %d.\n", score);
}

void collatz(int n, int score)
{
    score ++
    if (n % 2 == 0)
    {
        n /= 2;
        collatz(n, score);
    }
    else if (n % 2 == 1)
    {
        n = 3n + 1;
    }
}
