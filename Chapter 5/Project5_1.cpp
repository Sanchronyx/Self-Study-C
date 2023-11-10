#include <stdio.h>

int main(void){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 9)
    printf("The number has 1 digit");
    else
        if (n <= 99)
        printf("The number has 2 digits");
        else
            if (n <= 999)
            printf("The number has 3 digits");
    
    return 0;
}