#include <stdio.h>

int main(void){
    float trade, com;
    printf("Enter value of trade: ");
    scanf("%f", &trade);
    if (trade < 2500)
    com = (30 + (trade*(1.7/100)));
    else if (trade < 6500)
    com = (56 + (trade*(0.66/100)));
    else if (trade < 20000)
    com = (76 + (trade*(0.34/100)));
    else if (trade <50000)
    com = (100 + (trade*(0.22/100)));
    else if (trade <500000)
    com = (155 + (trade*(0.11/100)));
    else if (trade < 500000)
    com = (255 + (trade*(0.09/100))); 

    printf("Commission: %.2f", com);

    return 0;
    
}