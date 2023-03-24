#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompts user for credit card number.
    long num;
    do
    {
        num = get_long("Give me a credit card number: ");
    }
    while(num < 0);

    //calculate checksum    `1
    long digit = 0;
    int sum = 0;
    long d = 10;
    long n = 100;

    //check for the last digits using modulo
    //Multiplies every other digit by 2, starting with second-to-last digit and adds those digits together
    for(long i = 100; i <= num * 100; i *= 100)
    {
        digit = (num % n) / d;
        sum += (digit * 2);
        d *= 100;
        n *= 100;
    }
    for(long i = 100; i <= num * 10; i *= 10)
    {
        digit = (num % n) / d;
        sum += (digit * 2);
        d *= 100;
        n *= 100;
    }
}
        //add the some to the sum of the digits that weren't multiplied by 2

    //check for length and starting digits

    //print AMEX, MASTERCARD, VISA or INVALID
