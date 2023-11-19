#include <stdio.h>

#define LAST_NAME 20

int main(void){
    char last_name[LAST_NAME];
    char first_name;
    int i = 0, j = 0;

    printf("Enter a first name and a last name: ");
    scanf("%c", &first_name);

    while ((last_name[i] = getchar()) != ' '); //last_name[i] != '\n'){
    while ((last_name[i] = getchar()) != ('\n')){
        //scanf("%c", last_name[i]);
        i++;
    }
    
    for (j = 0; j < i; j++){
        printf("%c", last_name[j]);
    }
    printf(".");
    printf(" %c", first_name);


    /*while ((last_name[LAST_NAME] = getchar()) != ('\n')){
        
    }*/

}