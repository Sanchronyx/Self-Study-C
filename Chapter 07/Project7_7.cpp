#include <stdio.h>

int main(void){

    char ch /*a = '+', b = '-', c = '*', d = '/';*/;
    int num1, denom1, num2, denom2;
    int result = 0;
    printf("Enter two fractions and operation to be performed: ");
    scanf("%d/%d %c %d/%d", &num1, &denom1, &ch, &num2, &denom2);

        if (ch == '+'){
             result = (num1*denom2) + (num2*denom1);
        }
        else if (ch == '-'){
             result = (num1*denom2) - (num2*denom1);
        }
        else if (ch == '*'){
             result = num1 * num2;
        }
        else if (ch == '/'){
             result = (num1*denom2) / (num2*denom1);
        }
    printf("Result: %d/%d", result, (denom1*denom2));

}

/*int num1, denom1, num2, denom2, result_num, result_denom;

   printf("Enter the fractions to be added: ");
   scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

   result_num = num1 * denom2 + num2 * denom1; 
   result_denom = denom1 * denom2;

   printf("The sum is %d/%d\n", result_num, result_denom);

   return 0;*/



   /*printf("Enter first fraction: ");
   scanf("%d/%d", &num1, &denom1);

   printf("Enter second fraction: ");
   scanf("%d/%d", &num2, &denom2);*/