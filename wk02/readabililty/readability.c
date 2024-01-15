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

// find the coleman index of the string
char *coleman(string a)
{
    int p = 0;
    int d = strlen(a);
    int word = 0;
    float L = 0;
    float S = 0;
    int index = 0;
    char *grade = "No Grade yet. \n";

    // find number of words and sentencesin text
    do
    {
        if (isspace(a[p]))
        {
            word++;

            if (a[p - 1] == '!' || a[p - 1] == '.' || a[p - 1] == ',' || a[p - 1] == '?')
            {
                S++;
            }

        }

        p++;
    }
    while(p < d - 1);

    if (!isspace(a[d - 1]))
    {
        word++;
    }

    // find number of letters and sentences in word
    for (int i = 0; i <= word ; i++)
    {
        // number of letters in "words"
        if (isalpha(a[i]))
        {
            L++;
            i++;
        }
    }
    for (int j = 0; j <= word; j++)
    {

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
        grade = "Before Grade 1\n";
    }

    return grade;
}
    // In my younger and more vulnerable years my father gave me some advice that I've been turning over in my mind ever since.... expecting 23 spaces
