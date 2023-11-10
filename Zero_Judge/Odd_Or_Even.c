#include <stdio.h>

int main(void){

    int i = 0;
    scanf("%d", &i);

    if (i % 2 == 0)printf("Even");
    else printf("Odd");

    return 0;
}