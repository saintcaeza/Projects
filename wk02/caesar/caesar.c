#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cipher(int k, string p);

int main(int argc, char *argv[])
{
    // accept a single command line argument
    if (argc != 2)
    {
        printf("Error: invalid number of command-line arguments. Usage: ./caesar key\n.");
        return 1;
    }

    char *key = argv[1];

    // command-line argument must be a decimal number
    for (int i = 0; key[i] < (strlen(key)); i++)
    {
        if (!isdigit(key[i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        else
        {
            int k = atoi(key);
            k = k % 25;
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
