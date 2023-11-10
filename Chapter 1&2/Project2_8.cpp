#include <stdio.h>

int main (void){

float loan, interest_rate, monthly_payment;

printf("Please enter amount of loan:");
scanf("%f", &loan);
printf("Enter interest rate: ");
scanf("%f", &interest_rate);
printf("Enter monthly payment: ");
scanf("%f", &monthly_payment);

float monthly_interest_rate = ((interest_rate / 100)  / 12);
float monthly_decrease = loan - monthly_payment,
monthly_balance = monthly_decrease + (monthly_decrease * monthly_interest_rate);

printf("Balance remaining after the first payment: %.2f\n", monthly_balance);
float monthly_balance_two = monthly_balance + (monthly_balance * monthly_interest_rate);
printf("Balance remaining after the second payment: %.2f\n", monthly_balance_two);
float monthly_balance_three = monthly_balance_two + (monthly_balance_two* monthly_interest_rate);
printf("Balance remaining after the third payment: %.2f\n", monthly_balance_three);

return 0;

}