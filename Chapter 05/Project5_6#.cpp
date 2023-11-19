#include <stdio.h>

int main(void){
    int fd, fd5, sd5;
    printf("Enter the first single digit: ");
    scanf("%d", &fd);
    printf("Enter the first group of five digits: ");
    scanf("%d", &fd5);
    printf("Enter the second group of five digits: ");
    scanf("%d", &sd5);

    //1 23456 7891011     
    //0 13800 151 7 3 [5]
    int sep_fg3, sep_fg5, sep_fg7, sep_fg9, sep_fg11;
    int sep_fg2, sep_fg4, sep_fg6, sep_fg8, sep_fg10;
    int sum_1, sum_2, msum_1, sum_23, total, adjtotal, fintotal;

    sep_fg3 = (fd5 / 10000) ;
    printf("%d\n", sep_fg3);
    sep_fg5 = (fd5 / 10) % 1;
    printf("%d\n", sep_fg5);
    sep_fg7 = (sd5 / 10000) % 10000;
    printf("%d\n", sep_fg7);
    sep_fg9 = (sd5 / 1000) % 1000;
    printf("%d\n", sep_fg9);
    sep_fg11 = (sd5 / 10) % 10;
    printf("%d\n", sep_fg11);

    sep_fg2 = (fd5 / 10000) % 10000;
    printf("%d\n", sep_fg2);
    sep_fg4 = (fd5 / 1000) % 1000;
    printf("%d\n", sep_fg4);
    sep_fg6 = (fd5/ 10) % 10;
    printf("%d\n", sep_fg6);
    sep_fg8 = (sd5 / 1000) % 1000;
    printf("%d\n", sep_fg8);
    sep_fg10 = (sd5 / 100) % 100;
    printf("%d\n", sep_fg10);
    sum_1 = fd + sep_fg3 + sep_fg5 + sep_fg7 + sep_fg9 + sep_fg11;
    sum_2 = sep_fg2 + sep_fg4 + sep_fg6 + sep_fg8 + sep_fg10;
    msum_1 = sum_1 * 3;
    sum_23 = msum_1 + sum_2;
    total = sum_23 - 1;
    adjtotal = total % 10;
    fintotal = 9 - adjtotal;

    printf("Check Digit: %d\n", fintotal);
    if (fintotal >= 10)
    printf("INVALID\n");
    else
    printf("VALID\n");

    return 0;
}