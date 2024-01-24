#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int key = 0;

void get_key(int , string argv[], int keylen);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Error: invalid number of command line arguments. Usage: ./caesar key");
        return 1;
    }
    get_key(argc, argv, keylen);
    string plaintext = get_string("plaintext: \n");
}

void get_key(int argc, string argv[], int keylen)
{ // check if key is valid, convert argument to integer
    if (argc != 2)
    {
        if (argv[2] >= 0 && argv[2] <= 9)
        {
            key = atoi(argv[1]);
        }
    }
    else
    {
        printf("Usage: ./caesar key");
    }
}

// Encipher
// print cipher
