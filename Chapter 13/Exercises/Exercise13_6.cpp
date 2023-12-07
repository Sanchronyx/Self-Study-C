#include <stdio.h>
#include <ctype.h>

#define MAX 100

void censor(char *scan){
    
    char output[MAX], *outputPTR = output;

    while (*scan != '\0'){
        if (*scan == 'f' && *(scan+1) == 'o' && *(scan+2) == 'o'){
            *outputPTR = 'x';
            *(outputPTR+1) = 'x';
            *(outputPTR+2) = 'x';
            outputPTR += 3;
            scan+= 2;
        }
        else{
            *outputPTR = *scan;
            outputPTR++;
        }
        scan++;
    }
    
    *outputPTR = '\0';
    printf("Censored Word: %s\n", output);
}


int main(void){

    printf("Enter a word: ");
    char word[MAX], c;
    int i = 0;
    while ((c = getchar()) != '\n'){
        word[i] = c;
        i++;
    }
    censor(word);
}