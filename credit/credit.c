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
    long checksum = 0;
    for(long i = 100; i < number; i += 100)
    {
        checksum = number % i;
        return checksum;
    }
    printf("checksum: %li\n", checksum);

        //Add those products' digits together

        //add the some to the sum of the digits that weren't multiplied by 2

    //check for length and starting digits

    //print AMEX, MASTERCARD, VISA or INVALID
}