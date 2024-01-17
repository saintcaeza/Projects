#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void coleman(string a);

int main(void) {
    string text = get_string("Input sample text: ");

    coleman(text);
}

void coleman(string a) { // find the coleman index of the string
    int p = 0, word = 0, index = 0, d = strlen(a);
    float L = 0, S = 0;
    char *grade = "No Grade yet.";

    do {  // find number of words, letters and sentences in text
        if ((isalpha(a[p]))) {
            L++;
            }
        if (((isalpha(a[p])) && ((a[p+1] == ' ') || (a[p+1] == '!') || (a[p+1] == '?') || (a[p+1] == '.') || (a[p+1] == ',')))) {
            word++;
            }
        if (((a[p+1] == ' ' || a[p+1] == '\0' || a[p+1] == '"') && ((a[p] == '!') || (a[p] == '?') || (a[p] == '.')))) {
            S++;
            }
        p++;

    }
    while(p <= d);

    L = (L / word) * 100;
    S = (S / word) * 100;
    index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index >= 16) {
        printf("Grade 16+\n");
    }
    else if (index > 1) {
        char *buffer = malloc(20 * sizeof(char));
        sprintf(buffer, "Grade %d", index);
        printf("%s\n", buffer);
    }
    else if (index <= 1) {
        printf("Before Grade 1\n");
    }
    return;

}
