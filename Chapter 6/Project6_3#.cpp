#include <stdio.h>

int main(void){
    int n, i, d, gcdr, gcdn, rdn, rdd;
    printf("Enter a fraction: ");
    scanf("%d/%d", &n, &d);

    while (n && d != 0){
        gcdr = n % d;
        gcdn = d;
        i = gcdr;
        
        if (i == 0){
        rdn = n/gcdn;
        rdd = d/gcdn;}
        else {
        rdn = n/gcdr;
        rdd = d/gcdr;}
    }
    printf("In lowest terms: %d/%d", rdn, rdd);
}