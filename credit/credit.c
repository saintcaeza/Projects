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

    //calculate checksum
    long check = 0;
    int sum = 0;
    long d = 10;
    long n = 100;
    int length = 0;

    //check for the last checks using modulo
    for(long i = 100; i <= num * 100 ; i *= 100)
    {
        check = (num % n) / d;
        check *= 2;

         //Multiplies every other digit by 2, starting with second-to-last digit and adds those digits together
        if(check > 9)
        {
            sum += check % 10;
            sum += check / 10;
        }
        else
        {
            sum += check;
        }
        d *= 100;
        n *= 100;
        length ++;
    }

    long altcheck = 0;
    int altsum = 0;
    long b = 10;
    long c = 1;

    for(long i = 10; i < num ; i *= 100)
    {
        altcheck = (num % b) / c;
        sum += (check * 2);
        b *= 100;
        c *= 100;
        length ++;
    }

    //add the some to the sum of the checks that weren't multiplied by 2
    sum += altsum;

    //check for length and starting checks
     //print AMEX, MASTERCARD, VISA or INVALID
    if (sum % 10 != 0)
    {
        printf("sum %i\n", sum);
        printf("INVALID s\n");
    }
    else if (length == 15)
    {
        //american express 34 37
        if ((num / 1000000000000 == 37) || (num / 1000000000000 == 34))
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID a\n");
        }
    }
    else if ((length == 16) || (length == 13))
    {
        if ((num / 1000000000000000 == 4) || (num / 10000000000000 == 4))
        {
            printf("VISA\n");
        }
        //mastercard
        else if ((num / 100000000000000  == 51) || (num / 100000000000000 == 53) || (num / 100000000000000 == 54) || (num / 100000000000000 == 55))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}