#include <stdio.h>
#include <string.h>

#define LEN 100

void remove_filename(char *url){
    int fi = strlen(url);
    while (fi > 0){
        if(url[fi] == '/'){
            url[fi] = '\0';
            break;
        }
        fi--;
    }

}

int main(void){
    int i = 0;
    char input[LEN], c;

    while(1){
        printf("Enter Website Link: ");
        while ((c = getchar()) != '\n' && c != EOF){
            input[i++] = c;
        }
        if (c == EOF)break;
        remove_filename(input);
        printf("Removed URL: %s\n", input);
        i = 0;
    }
}