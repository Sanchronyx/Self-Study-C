#include <stdio.h>

int main(void){
    int decimal, octal_1, octal_2, octal_3, octal_4, octal_5;
    int octal_11, octal_22, octal_33, octal_44, octal_55;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &decimal);
    octal_1 = (decimal / 8);
    octal_11 = decimal % 8;
    octal_2 = (octal_1 / 8);
    octal_22 = octal_1 % 8;
    octal_3 = (octal_2 / 8);
    octal_33 = octal_2 % 8;
    octal_4 = (octal_3 / 8);
    octal_44 = octal_3 % 8;
    octal_5 = (octal_4 / 8);
    octal_55 = (octal_4 % 8);

    printf("In octal, your number is %d%d%d%d%d", octal_55, octal_44, octal_33, octal_22, octal_11);

    return 0;
}