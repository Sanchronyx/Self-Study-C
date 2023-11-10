#include <stdio.h>
//Find number of letters
//Find number of words
int main(void){
    int sent, word, letter_count = 0, word_count = 0;
    double avg = 0;
    int i = 0;
    char c;

    printf("Enter a sentence: ");
    while ((c = getchar()) != ('\n')){
    
    if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'){
        letter_count++;
    }
    else if (c == ' '){
        word_count++;
    }
    }
    word_count++;

    if (word_count > 0){
        avg = (double)letter_count / word_count;
    }
    
    printf("%d\n%d\n", letter_count, word_count);
    printf("Average word length: %.1lf", avg);
}









       /* word += c;
        for (i = 0; i < word; i++){
            letter_count = i;
        }
    }
    while ((c = getchar()) != '\n'){
        for (i = 0; i < word; i++){
            word_count = i;
        }
    }

    avg = letter_count / word_count;
    printf("Average Word Length: %.2lf", avg);*/
