#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompts user for credit card number.
    long number;
    do
    {
        number = get_long("Give me a credit card number: ");
    }
    while(number < 0);

    //calculate checksum

    //multiply every other digit by 2, starting with second-to-last digit
    //check for the last digits using modulo
    long digit = 0;
    long sum = 0;

    for(long i = 100; i < number; i * 100)
    {
        digit = number % i;

         //Add those products' digits together
        if(digit > 9)
        {
            digit /= 10;
            return digit;
        }
        else
        {
            sum += digit;
        }
    }
    printf("digit: %li\n", digit);

        //add the some to the sum of the digits that weren't multiplied by 2

    //check for length and starting digits

    //print AMEX, MASTERCARD, VISA or INVALID
}