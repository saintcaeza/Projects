#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int key = 0;

void get_key(int , char *argv[], int keylen);

int main(int argc, char *argv[])
{
    const int keylen = strlen(argv[1]);

    get_key(argc, argv, keylen);
    string plaintext = get_string("plaintext: \n");
}

void get_key(int argc, char *argv[], int keylen)
{ // check if key is valid, convert argument to integer
    if (argc < 1)
    {
        for (int i = 0; i < keylen; i++)
        {
            if (isdigit(argv[i]))
            {

            }
            else
            {
                printf("Usage: ./caesar key");
            }
        }
    }
    else
    {
        printf("Usage: ./caesar key");
    }
}

// Encipher
// print cipher
