#include <stdio.h>

int main(void){

    int num = 0;
    int ones = 0, tens = 0;
    printf("Enter a two digit number: ");
    scanf("%d", &num);
    tens = num / 10;
    ones = num % 10;

    if (num == 11 || num == 12 || num == 13 || num == 14 || num == 15 || num == 16 || num == 17 || num == 18 || num == 19){
        switch(num){
            case 11:
            printf("Eleven");
            break;
            case 12:
            printf("Twelve");
            break;
            case 13:
            printf("Thirteen");
            break;
            case 14:
            printf("Fourteen");
            break;
            case 15:
            printf("Fifteen");
            break;
            case 16:
            printf("Sixteen");
            break;
            case 17:
            printf("Seventeen");
            break;
            case 18:
            printf("Eighteen");
            break;
            case 19:
            printf("Nineteen");
            break;
        }
    }

    else if (num != 11 || num != 12 || num != 13 || num != 14 || num != 15 || num != 16 || num != 17 || num != 18 || num != 19){
        switch(tens){
            case 1:
            printf("Ten");
            break;
            case 2:
            printf("Twenty");
            break;
            case 3:
            printf("Thirty");
            break;
            case 4:
            printf("Forty");
            break;
            case 5:
            printf("Fifty");
            break;
            case 6:
            printf("Sixty");
            break;
            case 7:
            printf("Seventy");
            break;
            case 8:
            printf("Eighty");
            break;
            case 9:
            printf("Ninty");
            break;
            default:
            printf("");
            break;
        }
            printf("-");
            switch(ones){
            case 1:
            printf("One");
            break;
            case 2:
            printf("Two");
            break;
            case 3:
            printf("Three");
            break;
            case 4:
            printf("Four");
            break;
            case 5:
            printf("Five");
            break;
            case 6:
            printf("Six");
            break;
            case 7:
            printf("Seven");
            break;
            case 8:
            printf("Eight");
            break;
            case 9:
            printf("Nine");
            break;
            default:
            printf("");
            break;
        }
    }
    return 0;
}