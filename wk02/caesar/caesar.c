#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int N = 25;
char ALPHABET[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

void encipher(string k);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Error: invalid number of command line arguments. Usage: ./caesar key\n");
        return 1;
    }
    else if (!isdigit(argv[1]))
    {
        printf("Error: invalid key! Input numeric character\n");
        return 1;
    }
for (int i = 0; argv[1][i] != '\0'; i++) {
    if (!isdigit(argv[1][i])) {
        printf("Found a non-digit character: %c\n", argv[1][i]);
    }
}

    encipher(argv[1]);

}

void encipher(string k)
{// Encipher
    int key;

    int index = 0;

    string plaintext = (get_string("Input text: "));

    int len = strlen(plaintext);

    char ciphertext[len +1];

    if (!isdigit(k))
    {
        printf("")
        return 0;
    }
    key = atoi(k);

    // iterates through the characters of text
    for (int i = 0; i < len; i++)
    {    // convert ASCII characters to alphabetical index
        if (isalpha(plaintext[i]))
        {
            for (int j = 0; j < N; j++)
            {
                if ((alphabet[j] || ALPHABET[j]) == plaintext[i])
                { // find's the alphabetical index of a character in text
                    index += j;
                }
            }

            // shift alphabetical index using formula c[i] = (p[i] + k) % 26
            char c = (index + key) % 26;

            //convert back to ASCII preserving cases
            if (64 < k[i] && k[i] < 91)
            {
                c += 65;
                ciphertext[i] = c;
            }
            else if (96 < k[i] && k[i] < 123)
            {
                c += 97;
                ciphertext[i] = c;
            }
        }
    }

    ciphertext[len] = '\0';
    printf("%s", ciphertext);
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
