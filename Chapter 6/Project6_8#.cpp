/*
1. For loop that formats days and weeks.

*/

#include <stdio.h>

int main(void){
    int i, w, d;
    printf("Enter number of days in month: ");
    scanf("%d", &d);
    printf("Enter starting day of the week (1=Sun 7=Sat): ");
    scanf("%d", &w);

    for (i = 1; i <= d; i++){
        if (w = 1){
            printf("%2d", i);
        }
           else  if (w = 2){
            printf("%4d", i);
           }
            else if (w = 3){
            printf("%6d", i);
            }
            else if (w = 4){
            printf("%8d", i);
            }
            else if (w = 5){
            printf("%10d", i);
            }
            else if (w = 6){
            printf("%12d", i);
            }
            else if (w = 7){
            printf("%14d", i);
            }
    }
    return 0;
}