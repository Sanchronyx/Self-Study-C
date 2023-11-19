#include <stdio.h>

int main(void){

    int money = 0, i = 0;
    printf("Enter a a dollar amount: ");
    scanf("%d", &money);

    int twenty = money/20, money_2 = money % 20;
    int ten = money_2 / 10, money_3 = money_2 % 10, five = money_3 / 5, money_4 = money_3 % 5, one = money_4;

    printf("$20 Bills: %d\n$10 Bills: %d\n$5 Bills: %d\n$1 Bills: %d", twenty, ten, five, one);
    
}