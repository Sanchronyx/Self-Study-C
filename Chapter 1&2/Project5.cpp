#include <stdio.h>

int main(void){

float X, X5 = X*X*X*X*X, X4 = X*X*X*X, X3= X*X*X, X2 = X*X;
printf("The polynomial to be solved is: 3X^5 + 2X^4 - 5X^3 - X^2 + 7X - 6\n");
printf("Please asign a value to X:");
scanf("%f", &X);
printf("The calculated answer is %0.1f:", 3*X5 + 2*X4 - 5*X3 - X2 + 7*X - 6);
return 0;
}

