#include <stdio.h>

int main(void){
    int fib_num[40] = {0,1};

    int i, n, j = 0;
    for (i = 2; i < 40; i++){
    fib_num[i] = (i - 1) + (i - 2);
    }
    for (i = 0; i < 40; i++){
    printf("%d\n", fib_num[i]);
    }
    return 0;
}