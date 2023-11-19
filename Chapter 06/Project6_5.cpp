#include <stdio.h>

int main(void){
    int ogd = 0, rd = 0, rdr = 0, rdm = 0;
    printf("Enter a number: ");
    scanf("%d", &ogd);

    do {
        rdm = ogd % 10;
        rd = rd * 10 + rdm;
        ogd = ogd / 10;
    }
    while (ogd > 0);
    printf("The reversal: %d", rd);
    return 0;
}