#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* score(string a,string b);

const int N = 27;

int main(void)
{
    string player1 = get_string("Player 1: ");
    string player2 = get_string("Player 2: ");

    char* points = score(player1, player2);
    printf("%s", points);
}

char* score(string a, string b)
{
    int n = 0;
    int sum1 = 0;
    int sum2 = 0;

    int point[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    char alphabet[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    //update sum1 with the score of player1
    for (int i = 0; i < strlen(a); i++)
    {
        //iterates through player1 - 27 times
        for (int j = 0; j < N; j++)
        {
            a[n] =  toupper(a[n]);

            //determines the index of character 'n' relative to alphabet
            if (alphabet[j] == a[n])
            {
                printf("%s", a)
                sum1 += point[j];
            }
        }

        n++;
    }

    //update sum2 with the score of player2
    for (int i = 0; i < strlen(b); i++)
    {
         b[n] =  toupper(b[n]);

        //iterates through player2 - 27 times
        for (int j = 0; j < N; j++)
        {
            //determines the index of character 'n' relative to alphabet
            if (alphabet[j] == b[n])
            {
                printf("%s", b)
                sum2 += point[j];
            }
        }

        n++;
    }

    //determines the winner by comparing sums
  char* win = "No result yet\n";
    if (sum1 > sum2)
    {
       win = "Player 1 wins!\n";
    }
    else if (sum1 < sum2)
    {
        win = "Player 2 wins!\n";
    }
    else if (sum1 == sum2)
    {
        win = "Tie!\n";
    }
    return win;
}
