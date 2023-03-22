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
    for(int i = 0; i < number; i++)
    {

    }
    printf("number: %li\n", number);

    //check for length and starting digits
        //multiply every other digit by 2, starting with second-to-last digit

        //Add those products' digits together

        //add the some to the sum of the digits that weren't multiplied by 2

    //print AMEX, MASTERCARD, VISA or INVALID
}