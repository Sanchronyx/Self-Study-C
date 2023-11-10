#include <stdio.h>

int main(void){

    int m, n, GCD;
    while ( n != 0){
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    GCD = m % n;
    m = n;
    n = GCD;
    if (n == 0)
    printf("Greatest Common Denominator: %d\n", m);
    else
    printf("Greatest Common Denominator: %d\n", GCD);
    }
    return 0;

}