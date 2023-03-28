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

    //check for the last digit using modulo
    for(long i = 100; i < num; i *= 100)
    {
        check = (num % n) / d;
        check *= 2;
        printf("check: %li\n", check);
         //Multiplies every other digit by 2, starting with second-to-last digit and adds those digits together
        if(check > 9)
        {
            sum += check % 10;
            sum += check / 10;
            printf("sum: %i\n", sum);

        }
        else
        {
            sum += check;
            printf("sum: %i\n", sum);

        }
        d *= 100;
        n *= 100;
        length ++;
    }

    long altcheck = 0;
    int altsum = 0;
    long b = 10;
    long c = 1;

    for(long i = 10; i < num* 100 ; i *= 100)
    {
        altcheck = (num % b) / c;
        printf("altcheck: %li\n", altcheck);

        altsum += altcheck;
        printf("altsum: %i\n", altsum);

        b *= 100;
        c *= 100;
        length ++;
    }

    //add the some to the sum of the checks that weren't multiplied by 2
    sum += altsum;
    printf("sum: %i\n", sum);

    //check for length and starting checks
     //print AMEX, MASTERCARD, VISA or INVALID
    if (sum % 10 != 0)
    {
        printf("INVALID default\n");
    }
    else
    {
        if (length == 15)
        {
        //american express 34 37
            if ((num / 10000000000000 == 37) || (num / 10000000000000 == 34))
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID amex\n");
            }
        }
        else if ((length == 16) || (length == 13))
        {
            if ((num / 1000000000000000 == 4) || (num / 1000000000000 == 4))
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID visa\n");
            }
            //mastercard
            if ((num / 100000000000000  == 51) || (num / 100000000000000 == 53) || (num / 100000000000000 == 54) || (num / 100000000000000 == 55))
            {
                 printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID Mastercard\n");
            }
        }
    }
}