#include <stdio.h>

#define N 10

int main(void){

    int table_value[N] = {0};
    long n, digit;

    int j = 1;
    while (j > 0){
        printf("Enter a number: ");
        scanf("%ld", &n);
        if (n == 0){
            break;
        }
        while (n > 0){
            digit = n % 10;
            table_value[digit]++;
            n /= 10;
        }
    }

    int i;
    printf("Digit:       ");
    for (i = 0; i < N; i++){
        printf("%d  ", i);
    }

    printf("\n");
    printf("Occurrences: ");
    for (i = 0; i < N; i++){
        printf("%d  ", table_value[i]);

    }

    return 0;
}