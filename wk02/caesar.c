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
    string plaintext = get_string("plaintext: \n")
}

void get_key(int argc, int argv[])
{ // get key while ensuring single command-line argument
    if (argc > 1)
    {
        printf("Usage: ./caesar key");
        return;
    }
    else
    { // check if key is valid
        for (int i = 0; i < keylen; i++)
        {
            if (isdigit(argv[n]))
            {
                key = atoi(argv[n]);
            }

        }
    }
    // convert argument to an integer
}

//  Get plaintext
// Encipher
// print cipher
