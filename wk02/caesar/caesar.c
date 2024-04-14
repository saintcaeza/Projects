#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cipher(int k);

int main(int argc, char *argv[])
{
    // accept a single command line argument
    if (argc != 2)
    {
        printf("Error: invalid number of command-line arguments. Usage: ./caesar key\n.");
        return 1;
    }

    int k = argv[1] % 25;

    // command-line argument must be a decimal number
    for (int i = 0; argv[1][i] < (strlen(argv[1]; i++)))
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        else
        {
            
        }
    }




    string plaintext = get_string("plaintext:  ");

    cipher(int k, string p);

    return o;
}

void cipher(int k, string p)
{
    int len = strlen(p);
    string c[(len + 1)];

    // convert plaintext to cyphertext
    for (int i = 0; p[i] < (len + 1); i++)
    {
        if (isalpha(p[i]))
        {
            c[i] = p[i] + k;
        }
        else
        {
            c[i] = p[i];
        }
    }

    printf("ciphertext:  %s", c)
}
