#include <stdio.h>

int main(void){

    double f = 0, cel = 0;

    scanf("%lf", &f);

    cel = ((5.0/9.0) * (f - 32));

    printf("%.3lf", cel);
}