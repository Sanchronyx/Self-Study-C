#include <stdio.h>

int main(void){
    float money;

    printf("Please enter the amount of money:");
    scanf("%f", &money);
    printf("This is the amount without tax $%0.2f\n", money);
    printf("The is the amount of money with tax %0.2f", (money * 0.05) + money);

    return 0;
}