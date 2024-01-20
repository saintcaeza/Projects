#include <cs50.h>
#include <ctype.h>
#include <std.io>
#include <stdlib.h>
#include <string.h>

const int keylen = strlen(argv[1]);
const int key = 0;

void get_key(int , int argv[]);

int main(int argc, int argv[])
{
    get_key(argc, argv);
    string plaintext = get_string("plaintext: \n")
}

void get_key(int argc, int argv[])
{ // check if key is valid, convert argument to integer
    if (argc < 1)
    {
        for (int i = 0; i < keylen; i++)
        {
            if (isdigit(argv[i]))
            {
                key = atoi(argv[i]);
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
