// Program calculates the approximate level required to read some text
#include <cs50.h>
#include <ctype.h>

int calculate_grade(string text):

int main(void)
{
    string text = (get_string"Input sample text: \n");
}

int calculate_grade(string text)
{
    int word = 0;
    int L = 0;
    int S = 0;

    // identify set of 100 words
    for (int i = 0; i < strlen(text); i++)
    {
        // identifies 100 blank spaces (words)
        if (isspace(text[i]))
        {
            word++;

            // iterates through the first 100 words of text
            for (int j = 0; word = 100 : j < text[i]; j++)
            {
                // find L, where L is the average number of letters per 100 words in the text
                if (isalpha(text[j]))
                {
                    L++;
                }
                if (ispunct(text[j]))
                {
                    S++;
                }
            }
        }
    }

    int coleman_index(int L, int S)
    {
        
    }

    // use the Coleman-Liau index to calculate the grade requred to read text
        // index = 0.0588 * L - 0.296 * S - 15.8

}





// program should print as output “Grade X” where “X” is the grade level computed

