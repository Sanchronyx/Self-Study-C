#include <stdio.h>

int main(void){
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;

    printf("Enter numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, 
    &k, &l, &m, &n, &o, &p);
    printf(" %d %d %d %d\n %d %d %d %d \n %d %d %d %d\n %d %d %d %d\n", a, b, c, d, e, f, g, h, i, j, k,
    l, m, n, o, p);

    int row_sum1 = a + b + c + d, row_sum2 = e + f + g + h, row_sum3 = i + j + k + l,
    row_sum4 = m + n + o + p;
    int coloumn_sum1 = a+e+i+m, coloumn_sum2 = b+f+j+n, coloumn_sum3 = c+f+k+o, coloumn_sum4 = d+h+l+p;
    int diagonal_sum1 = a+f+k+p, diagnol_sum2 = d+g+j+m;

    printf("Row Sums: %d %d %d %d\n", row_sum1, row_sum2, row_sum3, row_sum4);
    printf("Coloumn Sums: %d %d %d %d\n", coloumn_sum1, coloumn_sum2, coloumn_sum3, coloumn_sum4);
    printf("Diaganol Sums: %d %d\n", diagonal_sum1, diagnol_sum2);

    return 0;

}