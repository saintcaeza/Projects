#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number;
    do
    {
        number = get_long("Give me a credit card number: ");
    }
    while(number < 0);

    for(int i = 0; i < number; i++)
    {
        
    }
    printf("number: %li\n", number);
}