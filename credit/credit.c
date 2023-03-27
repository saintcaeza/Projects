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
        printf("length: %i\n", length);

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
        printf("length: %i\n", length);
        length ++;
    }

    //add the some to the sum of the checks that weren't multiplied by 2
    sum += altsum;

    //check for length and starting checks
     //print AMEX, MASTERCARD, VISA or INVALID

  /*  if (num % 10 > 0)
    {
        printf("INVALID not a card number\n,");
    }*/
    if (length == 15)
    {
        //american express 34 37
        if ((num / 12 == 37) || (num / 12 == 34))
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID, wrong card\n,");
        }
    }
    else if ((length == 16) || (length == 13))
    {
        //mastercard
        long print = num / (10 ** 15);
        printf("number / 10 is: %i. \n", print);

        if ((num / (10 ** 15) == 4))
        {
            printf("VISA\n");
        }
        else if ((num / 10  == 51) || (num / 10 == 53) || (num / 10 == 54) || (num / 10 == 55))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID wrong card ...16\n,");
        }
    }
}
/*
for (int i; i <= num; i * 10)
{
    length ++;
} */
