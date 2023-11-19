#include <stdio.h>

#define SENTENCE 100

int main(void) {
    char sent[SENTENCE];
    char c;
    int i = 0, j = 0;
    int start = 0;

    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n' && i < SENTENCE - 1) { // Limit input length
        sent[i] = c;
        i++;
    }
    sent[i] = '\0'; // Null-terminate the sentence

    if (i > 0 && (sent[i - 1] == '!' || sent[i - 1] == '.' || sent[i - 1] == '?')) {
        c = sent[i - 1];
        i--; // Decrement i after processing the character
    }

    for (j = i - 1; j >= 0; j--) {
        if (sent[j] == ' ' || j == 0) {
            start = (j == 0) ? 0 : j + 1;
            for (int k = start; k < i; k++) {
                putchar(sent[k]);
            }
            if (j != 0) {
                putchar(' ');
            }
            i = j;
        }
    }

    if (c == '!' || c == '.' || c == '?') {
        putchar(c);
    }
    return 0;
}
