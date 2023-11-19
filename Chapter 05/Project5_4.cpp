#include <stdio.h>

int main(void){
    int speed;

    printf("Please enter the wind speed in knots: ");
    scanf("%d", &speed);
    if (speed < 1)
    printf("Wind Force: Calm");
    else if (speed < 3)
    printf("Wind Force: Light Air");
    else if (speed < 27)
    printf("Wind Force: Breeze");
    else if (speed < 47)
    printf("Wind Force: Gale");
    else if (speed < 63)
    printf("Wind Force: Storm");
    else if (speed >= 63)
    printf("Wind Force: Hurricane");

    return 0;
}