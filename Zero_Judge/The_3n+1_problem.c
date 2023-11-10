#include <stdio.h>

int main(void){
    int n = 0, m = 0;
    int bigger = 0, smaller = 0;

    scanf("%d %d", &n, &m);
    if (n > m){
        bigger = n;
        smaller = m;
    }
    else if (n < m){
        bigger = m;
        smaller = n;
    }

    int count = 0, i = 0;
    int temp = bigger;

    while (temp > 1){

        if (temp % 2 == 0){
          temp /= 2;
        }
        else temp = 3 * temp +1;
        count++;
    }

    printf("%d", i);
}