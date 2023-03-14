#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    // TODO
    //Go through the range of values and check if they are prime numbers or not
    if ((number % 2 == 1) && (number % 2 != 0))
    {
        //if prime return true
        return true;
    }
    else
    {
        //if not prime return false DON'T DO ANYTHING
        return false;
    }
}
