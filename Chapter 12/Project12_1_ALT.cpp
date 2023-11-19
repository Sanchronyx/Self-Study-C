#include <stdio.h>

#define N 100

int main(void){

    char a[N] = {0}, *p = &a[0];
    
    
    for (p = a; p < a + N && (*p = getchar()) != '\n' && *p != EOF; p++)

    for (p = (a + N-1); p >= a; p--){
        printf("%c", *p);
    }

    return 0;
}