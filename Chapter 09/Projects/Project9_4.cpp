#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define ABC 26

void read_word(int count[ABC]){

    bool check[ABC] = {false};
    int i = 0, index = 0;
    char ch;

    printf("Enter a word: ");
    while ((ch = getchar()) != '\n' && i < ABC - 1){
        ch = tolower(ch);
        index = ch - 'a';
        if (ch >= 'a' && ch <= 'z'){
            check[index] = true;
            count[index]++;
        }
        i++;
    }
}

bool equal_array(int counts1[ABC], int counts2[ABC]){

    int i = 0;
    int count[ABC];

    for (i = 0; i < ABC; i++){
        if (counts1[i] != counts2[i]){
            return false;
        }
    }
    return true;
}

int main(void){

    int get_word1[ABC] = {0};
    int get_word2[ABC] = {0};

    read_word(get_word1);
    read_word(get_word2);

    if (equal_array(get_word1, get_word2)){
        printf("The words are anagrams.");
    }
    else {
        printf("The words are not anagrams.");
    }
    
}