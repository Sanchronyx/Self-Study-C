#include <stdio.h>
#include <math.h>

double polynomial_function(double x){

    x = pow(3*x, 5) + pow(2*x, 4) - pow(5*x, 3) - pow(x, 2) + 7*x - 6;
    return x;
}

int main(void){

    double x;
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    double result = polynomial_function(x);
    printf("Value of the polynomial is: %.2lf ", result);

    return 0;

}