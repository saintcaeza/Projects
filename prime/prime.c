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

//Checks the range of values 'number' for what is not a prime numbers, with 2, 3, 5 and 7 as exceptions
bool prime(int number)
{
    if (number < 2)
    {
        return false;
    }
    else if (number == 2 || number == 3 || number == 5 || number == 7)
    {
        return true;
    }
    else if (number % 2 == 0)
    {
        return false;
    }
    else if (number % 3 == 0)
    {
        return false;
    }
    else if (number % 5 == 0)
    {
        return false;
    }
    else if (number % 7 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}