#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

cont int N = 2;
char ALPHABET[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

bool digits(string k);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Error: invalid number of command line arguments. Usage: ./caesar key\n");
        return 1;
    }
    return 0
    digits (argv[1]);

}

bool digits(string k)
{// Encipher
    string k = (get_string("Input text: "));
    int len = strlen(k);
    int index = 0;

    // iterates through the characters of text
    for (int i = 0; i < len; i++)
    {    // convert ASCII characters to alphabetical index
        if (isalpha(k[i]))
        {
            for (int j = 0; j < N; j++)
            {
                if ((alphbet[j] || Alphabet[j]) == k[i])
                {
                    index += j;
                    return index;
                }
            }

            // shift alphabetical index using formula c[i] = (p[i] + k) % 26
            int c = (index + key) % 26;

            //convert back to ASCII preserving cases
            if (64 < k[i] && k[i] < 91)
            {
                c += 65;
                k[i] = c
            }
            else if (96 < k[i] && k[i] < 123)
            {
                c += 97;
                k[i] = c;

            }

        }
    }
}

/*
    TO DO
    - Get Key
         - Get commandlinearg and Key
    - Get plaintext
    -
        - shift all alphabets by key preserve case
            -
            -
    - Print ciphertext
*/
