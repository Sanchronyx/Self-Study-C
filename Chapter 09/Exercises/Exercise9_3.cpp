#include <stdio.h>

int gcd(int m, int n)
int GCD
{
    while (n != 0){
    GCD = m % n;
    m = n;
    n = GCD;
    }
    return m;
}