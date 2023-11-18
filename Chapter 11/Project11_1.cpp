#include <stdio.h>

void pay_amount (int dollars, int* twenties, int* tens, int *fives, int *ones){
    int i = 0;
    int twenty = 0, ten = 0, five = 0, one = 0;
    for (i = 0; i <= dollars; i++){
        twenty = dollars / 20;
        *twenties = twenty;
        dollars %= 20;
        ten = dollars / 10;
        *tens = ten;
        dollars %= 10;
        five = dollars / 5;
        *fives = five;
        dollars %= 5;
        one = dollars;
        *ones = one;
        dollars = i;
    }
}

int main(void){

    int amount = 0, a, b, c, d;
    int acc = 0;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    pay_amount(amount, &a, &b, &c, &d);
    printf("$20 Bills: %d\n$10 Bills: %d\n$5 Bills: %d\n$1 Bills: %d", a, b, c, d);

    return 0;
}