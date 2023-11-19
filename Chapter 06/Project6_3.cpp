#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int denominator = 0, numerator = 0, GCD = 0;
    int i = 0;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    if (denominator > numerator) i = denominator;
    else i = numerator;

    while (1){
        i--;
        if (denominator % i == 0 & numerator % i == 0)break;
    }
    denominator /= i;
    numerator /= i;
    printf("In Lowest Terms: %d/%d", numerator, denominator);
}