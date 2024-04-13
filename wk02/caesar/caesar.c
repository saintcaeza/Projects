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

    // command-line argument must be a decimal number
    if ((!isdigit(argv[1])) || (argv[1] < 0))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int k = argv[1] % 25;

    string plaintext = get_string("plaintext:  ");

    cipher(int k, string p);
}

void cipher(int k, string p)
{
    // convert plaintext to cyphertext
    for (int i = 0; p[i] < strlen(p); i++)
    {
        if (isalpha(p[i]))
        {
            string c = p[i] + k;
        }
    }

    

}
