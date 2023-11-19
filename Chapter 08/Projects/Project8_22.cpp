#include <stdio.h>
#include <stdbool.h>

#define N 2
#define M 10

int main(void){

    int table_value[N][M] = {{0}};
    bool truefalse[10] = {false};
    long n;
    int digit, i, j;

    int rows = sizeof(table_value) / sizeof(table_value[0]);
    int coloumns = sizeof(table_value[0]) / sizeof(table_value[0][0]);

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0){
            digit = n % 10;
            if  (truefalse[digit]){
                table_value[digit++][M];
            }  
            else {
                    table_value[digit][M] = true;
            }
            n /= 10;
    }

    for (i = 1; i < rows; i++){
        for (j = 1; j < coloumns; j++){
    printf("Digits: %d\n Occurrences: %d\n", table_value[digit][i]);
    return 0;
    }
    }
}