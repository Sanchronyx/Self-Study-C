#include <stdio.h>

void reduce (int numerator, int denominator, int *reduced_numerator, int *reduced_denominator){
    
    int GCD, n = numerator, d = denominator;

    while (n != 0 && d != 0){
        GCD = n % d;
        n = d;
        d = GCD;
    }
    *reduced_numerator = numerator/n;
    *reduced_denominator = denominator/n;
}

int main(void){
    
    int n = 0, d = 0, rn = 0, rd = 0;
    printf("Enter a fraction: ");
    scanf("%d/%d", &n, &d);
    reduce (n, d, &rn, &rd);
    printf("In lowest terms: %d/%d", rn, rd);
    
    return 0;
}
