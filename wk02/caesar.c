#include <cs50.h>
#include <ctype.h>
#include <std.io>
#include <stdlib>
#include <string.h>

const int keylen = strlen(argv[1]);

char* Encipher(int argc, int argv[], plaintext);

int main(int argc, int argv[])
{
    string plaintext = get_string("plaintext: \n")
}

char* Encipher(int argc, int argv[], plaintext)
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
            if (!isdigit(argv[n]))
        }
    }
    // convert argument to an integer
}

//  Get plaintext
// Encipher
// print cipher
