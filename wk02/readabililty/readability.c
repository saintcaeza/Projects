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
    // identify sets of 100 words
    for (int i = 0; i < strlen(text); i++)
    {
        // identifies 100 blank spaces (words)
        if (isblank(text[i]))
        {
            word++
            for (int j = 0; j )
        }
        // find L, where L is the average number of letters per 100 words in the text

            // what isn't a leter? punctuation marks,spaces, numbers. everything else is a letter

            // find S, where S is the average number of sentences per 100 words in the text
    }

    // use the Coleman-Liau index to calculate the grade requred to read text
        // index = 0.0588 * L - 0.296 * S - 15.8

}





// program should print as output “Grade X” where “X” is the grade level computed

