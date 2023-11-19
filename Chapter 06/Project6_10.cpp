#include <stdio.h>

int main(void){
    int d, m, y, dd = 31, mm = 12, yy = 3000;

    while (1){
    printf("Enter date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m, &d, &y);
    if (y == 0 && d == 0 && m == 0){
    break;
    }

    if (y < yy || y == yy && m < mm || y == yy && m == mm && d < dd){
        yy = y;
        mm = m;
        dd = d;
    }
    /*if (m < mm){
    }
    else if (d < dd){
        mm = m;
        dd = d;
        yy = y;
    }
    else if (y < yy){
        mm = m;
        dd = d;
        yy = y;
    }
    */
    }
    printf("The earliest date is %d/%d/%d\n", mm, dd, yy);
    /*if (y < yy || m < mm || d < dd){
    printf("%d/%d/%d is earlier than %d/%d/%d", d, m, y, dd, mm, yy);
    }
        else if (y == yy & m == mm & d == d){
        printf("%d/%d/%d is the same as %d/%d/%d", d, m, y, dd, mm, yy);
        }
            else{
            printf("%d/%d/%d is earlier than %d/%d/%d", dd, mm, yy, d, m, y);
            }*/

}