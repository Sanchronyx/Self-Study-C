#include <stdio.h>

int main (void){
    float i, lmn;
    while ( i > 0){
    printf("Enter a number: ");
    scanf("%f", &i);
    if (i > lmn)
    lmn = i;
    }
    printf("The largest number entered was %f\n", lmn);
    return 0;
    
}