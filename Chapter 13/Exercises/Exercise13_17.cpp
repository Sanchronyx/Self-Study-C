#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define LEN 100

bool test_extension (const char *file_name, const char *extension){
    int i = 0, lenOne = strlen(file_name), lenTwo = strlen(extension);
    char storage[LEN];

    for (i = 0; i < lenOne && file_name[i] != '.'; i++){
        if (file_name[i] == '.'){
            i++;
            break;
        }
        storage[i] = file_name[i];
    }
    storage[i] = '\0';
   
    char compareArray[LEN];
    int j = 0, k = 0;
    for (j = 0, k = i + 1; j < lenTwo; j++, k++){
        compareArray[j] = file_name[k];
    }
    strupr(compareArray);
    char storageTwo[LEN];
    for (int l = 0; l < lenTwo; l++){
        storageTwo[l] = extension[l];
    }
    strupr(storageTwo);
    if (strcmp(compareArray, storageTwo) == 0)return(true);
    else return (false);
}

int main(void){
    char inputOne[LEN], inputTwo[LEN], c;
    int i = 0;
    while (1){
        while ((c = getchar()) != '\n' && c != EOF){
            inputOne[i++] = c;
        }
        inputOne[i] = '\0';

        if (c == EOF)break;
        int j = 0;
        while ((c = getchar()) != '\n' && c != EOF){
            inputTwo[j++] = c;
        }
        inputTwo[j] = '\0';

        if (c == EOF)break;
        if (test_extension(inputOne, inputTwo))printf("True\n");
        else printf("False\n");
        i = 0, j = 0;
    }
}