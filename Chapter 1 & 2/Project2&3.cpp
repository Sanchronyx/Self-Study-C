#include <stdio.h>
#define THE_VALUE_OF_PI 3.14

int main(void){

int radius;
printf("Please enter the value of the radius:");
scanf("%d", &radius);
printf("The volume of the the sphere is: %.1f", 4.0f/3.0f * THE_VALUE_OF_PI * (radius * radius * radius));
return 0;

}