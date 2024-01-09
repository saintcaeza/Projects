#include <stdio.h>
#include <cs50.h>

int main(void) {
    //Get name
    string name = get_string("What is your name?\n");
    printf("Your name is %s\n", name);
    //Get phone number
    int number= get_int("What is your phone number?\n");
    printf("%i is your phone number.\n", number);

    //get age
    int age = get_int("What is your age?\n");
    printf("you are %i year's old.\n", age);
}