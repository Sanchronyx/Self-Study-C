#include <stdio.h>

int main(void){
    int item_number, mm, dd, yy;
    float unit_price;
    printf("Enter item number:");
    scanf("%d", &item_number);
    printf("Enter unit price:");
    scanf("%f", &unit_price);
    printf("Enter purchase date:");
    scanf("%d/%d/%d", &mm, &dd, &yy);

    printf("\n\t\t\tItem \tUnit Price\t Purchase Date\n");
    printf("\t\t\t%d", item_number);
    printf("\t\t%0.1f", unit_price); 
    printf("\t%d/%d/%d", mm, dd, yy);

    return 0;
}