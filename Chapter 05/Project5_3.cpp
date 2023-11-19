#include <stdio.h>

int main(void){
    float pps, shares, com;
    printf("Enter price per share: ");
    scanf("%f", &pps);
    printf("Enter number of shares: ");
    scanf("%f", &shares);

    float trade = pps * shares;

    if (trade < 2500)
    printf("Commission: %.2f\n",(30 + (trade*(1.7/100))));
    else if (trade < 6500)
    printf("Commission: %.2f\n",(56 + (trade*(0.66/100))));
    else if (trade < 20000)
    printf("Commission: %.2f\n",(76 + (trade*(0.34/100))));
    else if (trade <50000)
    printf("Commission: %.2f\n",(100 + (trade*(0.22/100))));
    else if (trade <500000)
    printf("Commission: %.2f\n",(155 + (trade*(0.11/100))));
    else if (trade < 500000)
    printf("Commission: %.2f\n",(255 + (trade*(0.09/100)))); 

    //Rival competitor 
    
    if (shares < 2000){
    com = 33 + (0.03 * shares);}
    else if (shares > 2000){
    com = 33 + (0.02 * shares);}
    printf("Rival company's commission: %0.2f", com);
    return 0;
    
}