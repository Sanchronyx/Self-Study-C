#include <stdio.h>
#include <ctype.h>

#define NUM 500

/*******************************    PART ONE    ***************************************************/
// void capitalize(char words[], int n){
//     int i = 0;
//     char output[NUM];
//     for (i = 0; i < n; i++){
//         output[i] = toupper(words[i]);
//     }
//     printf("Capitalized Sentence: %s", output);
// }

// int main(void){

//     char sent[NUM], c;
//     int i = 0;

//     printf("Enter sentence to be capatalized: ");
//     while ((c = getchar()) != '\n'){
//         sent[i++] = c;
//     }
//     sent[i] = '\0';
//     capitalize(sent, NUM);
//     return 0;
// }

/*******************************    PART TWO    ***************************************************/
void capitalize(char *sent){

    char output[NUM], *outputPTR = output;

    while (*sent != '\0'){
        *outputPTR = toupper(*sent);
        sent++;
        outputPTR++;
    }

    *outputPTR = '\0';

    printf("Capitalized Sentence: %s", output);
}

int main(void){

    char sent[NUM], c;
    int i = 0;

    printf("Enter sentence to be capatalized: ");
    while ((c = getchar()) != '\n'){
        sent[i++] = c;
    }
    sent[i] = '\0';
    capitalize(sent);
    return 0;
}