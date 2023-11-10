#include <stdio.h>

int main(void){
    int height = 8, length = 12, width = 10, volume, weight;
    printf("Please enter height:");
    scanf("%d", &height);
    printf("Please enter length:");
    scanf("%d", &length);
    printf("Please enter the width:");
    scanf("%d", &width);

    printf("The volume is: %d\n", height * length * width);
    printf("The weight is: %d", (volume + 165) / 166);

    return 0;

}