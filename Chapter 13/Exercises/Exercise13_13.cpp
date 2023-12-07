#include <stdio.h>
#include <string.h>

#define LEN 100

void build_index_url(const char *domain, char *index_url){

    char begin[] = "http://www.";
    char end[] = "/index.html";
    int i = 0;
    int len = strlen(begin);

    for (i = 0; i < len; i++){
        index_url[i] = begin[i];
    }
    index_url[i]= '\0';
    strcat(index_url, domain);
    strcat(index_url, end);
}

int main(void){

    char input[LEN], output[LEN], c;
    int i = 0;
    
    while (1){
        printf("Enter part of a website: ");
        while((c = getchar()) != '\n' && c != EOF){
        input[i++] = c;
        }
        input[i] = '\0';
        if (c == EOF)break;
        build_index_url(input, output);
        printf("Full Website: %s\n", &output);
        i = 0;
    }
   return 0;
}