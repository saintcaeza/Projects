#include <stdio.h>
#include <cs50.h>

int main(void) {
    //prompt the user for a starting number of llamas
long n = get_long("how many llamas are there at the beginning? ");

    //prompt the user for a goal number of llamas
long goal = get_long("How many llamas do you want to get? ");

    //add and subtract every 'year; until we reach the goal number of llamas
long year = 1;

do {
    n = n + ( n / 3);
    n = n - (n / 3);
    return n;
    year++;
 }
while (n < goal);

    //print the goal number of years it took to reach the goal number of llamas
printf( "It took %l years to reach %l number of llamas." year,goal );
}