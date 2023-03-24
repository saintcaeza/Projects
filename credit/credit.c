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

    //check for the last digits using modulo
    for(long i = 100; i < num; i *= 100)
    {
        int d = 10;
        int n = 100;
        digit = (num % n) / (n/d);
        sum += (digit * 2);
        d *= 100;
        n *= 100;
    }
    //Multiplies every other digit by 2, starting with second-to-last digit and adds those digits together
        printf("digit: %li\n", digit);
        printf("sum: %i\n", sum);



      /*  if(digit > 9)
        {
            //Makes sure whatever is multiplied is a single digit\
            for(long long j = 10; j < digit; j *= 10)
            {
                long long divisor = 10;
                digit = digit / divisor;
                return digit;
            }
        }
        else
        {
            sum = sum + (digit * 2);
            return sum;
        }
        */
}
             //Add those products' digits together


        //add the some to the sum of the digits that weren't multiplied by 2

    //check for length and starting digits

    //print AMEX, MASTERCARD, VISA or INVALID
