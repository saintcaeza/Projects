#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //ask for the users name
    string name = get_string("What is your name? ");

    //print name
    printf("hello, %s\n", name);
}