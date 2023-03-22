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

    //multiply every other digit by 2, starting with second-to-last digit
    //ceck for the last digits using modulo
    

        //Add those products' digits together

        //add the some to the sum of the digits that weren't multiplied by 2

    //check for length and starting digits

    //print AMEX, MASTERCARD, VISA or INVALID
}