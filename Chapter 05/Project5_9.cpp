#include <stdio.h>

int main(void){
    int d, m, y, dd, mm, yy;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &d, &m, &y);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &dd, &mm, &yy);

    if (y < yy || m < mm || d < dd){
    printf("%d/%d/%d is earlier than %d/%d/%d", d, m, y, dd, mm, yy);
    }
        else if (y == yy & m == mm & d == d){
        printf("%d/%d/%d is the same as %d/%d/%d", d, m, y, dd, mm, yy);
        }
            else{
            printf("%d/%d/%d is earlier than %d/%d/%d", dd, mm, yy, d, m, y);
            }

}