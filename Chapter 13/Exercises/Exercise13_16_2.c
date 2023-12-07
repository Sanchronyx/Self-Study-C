#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define LEN 100

bool test_extension (const char *file_name, const char *extension){
    int lenOne = strlen(file_name) - 1, lenTwo = strlen(extension) - 1;
    
    while (lenOne >= 0 && lenTwo >= 0){
        if (toupper(file_name[lenOne]) != toupper(extension[lenTwo])) return false;
        if (lenTwo == 0){
            if (lenOne > 0) return file_name[lenOne - 1] == '.';
            else return false;
        }
        lenOne--;
        lenTwo--;
    }
    
    return false;

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