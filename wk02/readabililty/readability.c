// Program calculates the approximate level required to read some text
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

char *coleman(string a);

int main(void)
{
    string text = get_string("Input sample text: ");

    char *pointer = coleman(text);
    printf("%s\n", pointer);
}

char *coleman(string a)
{
    int d = strlen(a);
    int word = 0;
    int L = 0;
    int S = 0;
    int index = 0;

    char *grade = "No Grade yet. \n";

    do
    {
        if (isspace(a[i]))
        {
            word++;
        }

        i++
    }
    while(a[i] < d);

    // find number of letters in word
    for (int i = 0; i < d; i++)
    {
        if (isalpha(a[j]))
        {
            L++;
        }
        // find number of sentences per 100 words
        if (ispunct(a[j]) && isspace(a[j+1]))
        {
            S++;
        }


    // iterates through text
    for (int i = 0; i < strlen(a); i++)
    {
        // identifies 100 blank spaces (words)

            if (word == 100)
            {
                // iterates through the first 100 words of text

                }
            }
        }
    }

    L = (L / word) * 100;
    S = (S / word) * 100;

    index = 0.0588 * L - 0.296 * S - 15.8;

    if (index >= 16)
    {
        grade = "Grade 16+\n";
    }
    else if (index > 1)
    {
        printf("Grade %i\n", index);
    }
    else if (index <= 1)
    {
        grade = "Before Grade \n";
    }

    return grade;
}
/*char grade[50]; // make sure it's large enough
sprintf(grade, "Grade %i\n", index); */
