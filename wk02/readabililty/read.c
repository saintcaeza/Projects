#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void countTheCunts(const char *text);

int main(void) {
    char* text = get_string(" ");
    calculateColemanThingy(text);
}

void calculateColemanThingy(const char *text) {
    int letters = 0, words = 0, sentences = 0;
    int i = 0;

    while (text[i] != '\0') {
        if (isalpha(text[i])) {
            letters++;
        } else if (text[i] == ' ') {
            words++;
        } else if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            sentences++;
        }
        i++;
    }

    //  Assuming that the index -1 points to the last character in the array
    if (i > 0 && text[i - 1] != ' ') {
        words++;
    }

    // float L = (float)letters / words * 100;
    // float S = (float)sentences / words * 100;

    // float cIndex = 0.0588 * L - 0.296 - S - 15.8;
    // return cIndex;

    char result[128];
    sprintf(result, "Words: %d, Letters: %d, Sentences: %d", words, letters, sentences);
    printf("%s\n", result);
}

