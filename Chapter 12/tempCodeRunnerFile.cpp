#include <stdio.h>
#include <stdbool.h>

#define N 100

int main(void){

    char word[N] = {0}, c, reverse_word[N];
    bool check1[N] = {false};
    int i = 0, count1 = 0;

    printf("Enter a message: ");
    while (((c = getchar()) != '\n')){
        if ((c != '!') || (c != '.') || (c != ',') || (c != '?') || (c != '"')){
        word[i] = c;
        check1[i] = true;
        count1++;
        i++;
        }
    }

    int j = 0, count2 = 0, k = 0;
    for (j = i-1, k = 0; j >= 0; j--, k++){
        reverse_word[k] = word[j];
        //printf("%c\n", reverse_word[k]);
    }

    bool check2[N] = {false};
    for (k = 0; k <= i; k++){
        if (reverse_word[k] != word[k])check2[k] = false;
        else check2[k] = true;
        if (check2[k] == true)count2++;
    }
       
    if (count1 == count2)printf("Palindrome");
    else printf("Not a palindrome");

    return 0;
}