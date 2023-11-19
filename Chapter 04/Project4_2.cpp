#include <stdio.h>

int main(void){
    int ogd, rd, rdr, rdm;

    printf("Enter a three-digit number: ");
    scanf("%d", &ogd);
    rd = ogd/100;
    rdm = (ogd%100)/10;
    rdr = ogd%10;

    printf("The reversal is: %d%d%d", rdr, rdm, rd);

    return 0;
}