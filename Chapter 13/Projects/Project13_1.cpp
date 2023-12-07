#include <stdio.h>
#include <string.h>

#define LEN 20

int main(void){

    char c, input[LEN];
    int i = 0, count = 0; 
    char largest_word[LEN] = "", smallest_word[LEN] = "";

    while(1){
        printf("Enter word: ");
        while((c = getchar()) != '\n' && c != EOF){
            input[i++] = c;
        }
        input[i] = '\0';
        if (count == 0)strcpy(smallest_word, input);
        if (strcmp(input, smallest_word) < 0) strcpy(smallest_word, input);
        if (strcmp(input, largest_word) > 0) strcpy(largest_word, input); 
        if (strlen(input) == 4)break;
        i = 0, count++;
    }

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

    return 0;
}