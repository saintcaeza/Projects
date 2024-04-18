#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

void collatz(int n, int score);

int main (void)
{
    int score = 0;
    int n = get_int("what's the int: \n");

    collatz(n, score);
    printf("T")
}
