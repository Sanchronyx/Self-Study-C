#include <stdio.h>
#include <ctype.h>

#define ABC 26

int main(void){

    bool count[ABC] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char ch;
    int i = 0, sum = 0, index;

    while ((ch = getchar()) != ('\n')){
        ch = toupper(ch);

        if (ch >= 'A' && ch <= 'Z'){
            index = ch - 'A';
            sum += count[index];
        }
    }
    printf("Scrabble value: %d", sum);
    return 0;
} 