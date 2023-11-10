#include <stdio.h>

int main(void){
    int n, i;
    int a = 1;
    printf("Enter the number of layers: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++){
        for (int j = 0; j < n-i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}