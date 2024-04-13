#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int N = 25;
char ALPHABET[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

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
    // encipher plaintext using caesar's equation
    for (int i = 0; i < strlen(p); i++)
    {
        
    }
    string c =
}
