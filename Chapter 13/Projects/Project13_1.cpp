#include <stdio.h>
#include <string.h>

#define LIMIT "ABCD"
int main(void){

    char word[20], c;
    int len = 0, i = 0;
    
    while (1){
        gets(word);
        printf("%s\n", word);
        len = strlen(LIMIT);
        //if (strcmp(word, len) == 0)break;
    }
}