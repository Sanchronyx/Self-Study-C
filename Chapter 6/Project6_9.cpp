#include <stdio.h>

int main (void){
    int np;
    float loan, interest_rate, monthly_payment;
    printf("Please enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    printf("Enter number of payments: ");
    scanf("%d", &np);

    float monthly_interest_rate = ((interest_rate / 100)  / 12);
    float monthly_balance = loan;
    float new_balance;
    for (int i = 1; i <= np; i++){
        monthly_balance = monthly_balance - monthly_payment;
        monthly_balance = monthly_balance + (monthly_balance * monthly_interest_rate);
        printf("Balance %d: %0.2f\n", i, monthly_balance);


       /*if (np == 1){
        printf("Balance remaining: %.2f\n", monthly_balance); 
        }
        else if (np >= 2){
        monthly_balance = new_balance + (new_balance * monthly_interest_rate);
        printf("Balance after payment %d: %.2f\n", i, monthly_balance);
        }
    new_balance = monthly_balance;*/
    }

    return 0; 
}
















