#include <stdio.h>

#define N 10

int main(void){

    int table_value[N] = {0};
    long n, digit;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0){
        digit = n % 10;
        table_value[digit]++;
        n /= 10;
    }
    
    int i;

    printf("Digit:       ");
    for (i = 1; i < N; i++){
        printf("%d  ", i);
    }

    printf("\n");
    printf("Occurrences: ");
    for (i = 1; i < N; i++){
        printf("%d  ", table_value[i]);
    }

    return 0;
}