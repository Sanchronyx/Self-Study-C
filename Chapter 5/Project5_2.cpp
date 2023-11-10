#include <stdio.h>

int main(void){
    int t24, m24, t12;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &t24, &m24);
    t12 = t24 - 12;

    if (24 == t24)
    printf("The 12-hour time is: %.2d:%.2d AM", t12, m24);
    else if (12 < t24) 
    printf("The 12-hour time: %.2d:%.2d PM", t12, m24);
    else if (12 == t24)
    printf("The 12-hour time: %.2d:%.2d PM", t24, m24);
    return 0;
}
   

 