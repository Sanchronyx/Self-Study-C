#include <stdio.h>

int main(void){
    int ogd, rd, rdr, rdm;

    printf("Enter a three-digit number: ");
    scanf("%d", &ogd);
    rd = ogd/10;
    rdm = ogd%10;

    printf("The reversal is: %d%d", rdm, rd);

    return 0;
}