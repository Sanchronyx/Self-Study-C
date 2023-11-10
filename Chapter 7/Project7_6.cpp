#include <stdio.h>

int main(void){
    int a;
    short int b;
    long int c;
    float d;
    double e;
    long double f;

    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(short int));
    printf("%zu\n", sizeof(long int));
    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(long double));

    return 0;
}