#include <stdio.h>

int main(void){
    char first_name, last_name;

    printf("Enter a first and last name: ");
    scanf("%c", &first_name);

    while ((last_name = getchar()) != (' '));
    while ((last_name = getchar()) != ('\n')){
        printf("%c", last_name);
    }
    printf(" %c.", first_name);
}
