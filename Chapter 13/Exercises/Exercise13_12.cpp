#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LEN 100

void get_extension(const char *file_name, char *extension){

    int i = 0;
    int len = strlen(file_name);
    char storage[LEN];

    for (i = 0; i < len && file_name[i] != '.'; i++){
        storage[i] = file_name[i];
    }

    if (file_name[i] == '.') strcpy(extension, file_name + i + 1);
    else extension[0] = '\0';
}

int main(void){

    char file[LEN], c, output[LEN];
    int i = 0;

    while (1){

        printf("Enter the name of a file: ");
        while ((c = getchar()) != '\n' && c != EOF){
            file[i++] = c;
        }
        if (c == EOF)break;

        file[i] = '\0';
        get_extension(file, output);
        printf("File Extension: %s\n", output);
        i = 0;
    }

    return 0;
}