#include <stdio.h>

int main(void){

    double a = 0, b = 0, h = 0;

    scanf("%lf %lf %lf", &a, &b, &h);
    double area = ((a + b) / 2) * h;

    printf("%.lf", area);
}