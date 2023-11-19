#include <stdio.h>

void reduce (int numerator, int denominator, int *reduced_numerator, int *reduced_denominator){
    
    int GCD;

    while (numerator != 0 && denominator != 0){
        GCD = numerator % denominator;
        numerator = denominator;
        denominator = GCD;
    }

    *reduced_numerator = numerator/GCD;
    *reduced_denominator = denominator/GCD;
}

int main(void){
    
    int n = 0, d = 0, rn = 0, rd = 0;
    printf("Enter a fraction: ");
    scanf("%d/%d", &n, &d);
    reduce (n, d, &rn, &rd);
    printf("In lowest terms: %d/%d", rn, rd);
    
    return 0;
}