#include <stdio.h>

int main(void){

    int grade = 0, tens = 0, ones = 0;
    printf("Enter a numerical grade: ");
    scanf("%d", &grade);
    if (grade > 100 || grade < 0)printf("Invalid Value");
    tens = grade / 10;
    ones = grade % 10;

    switch(tens){
        case 10:
        printf("A");
        break;
        case (9):
        printf("A");
        break;
        case (8):
        printf("B");
        break;
        case (7):
        printf("C");
        break;
        case (6):
        printf("D");
        break;
        default:
        printf("F");
        break;
    }
    return 0;
}