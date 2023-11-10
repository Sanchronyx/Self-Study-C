#include <stdio.h>

int main(void){

    int mm, dd, yy;

    printf("Please enter the date in the form mm/dd/yy:");
    scanf("%d/%d/%d", &mm, &dd, &yy);
    printf("You entered the data: %d/%d/%d", yy, mm, dd);

    return 0;
}