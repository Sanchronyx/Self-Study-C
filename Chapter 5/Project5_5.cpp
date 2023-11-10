#include <stdio.h>

int main(void){
    float income, tax; 

    printf("Enter your taxable income: ");
    scanf("%f", &income);
    if (income <= 750){
    tax = (income * (1.0/100.0));}
    else if (income > 750 && income <= 2250){
    tax = (7.50 + (income * (2.0/100.0)));}
    else if (income > 2250 && income <= 3750){
    tax = (37.50 + (income * (3.0/100.0)));}
    else if (income > 3750 && income <= 5250){
    tax = (82.50 + (income * (4.0/100.0)));}
    else if (income > 5250 && income < 7000){
    tax = (142.50 + (income * (5.0/100.0)));}
    else if (income >= 7000){
    tax = (230 + (income * (6.0/100.0)));}

    printf("Tax due: $%.2f", tax);
    return 0;

}