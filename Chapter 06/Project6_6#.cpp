#include <stdio.h>
#include <math.h>

int main(void){
    int i, n, m, x, y;
    printf("Enter a number: ");
    scanf("%d", &n);
    m = sqrt(n);
    for ( i = 1; i <= m; i+=2){  
    x = (2*i);
    y = x*x;
    printf("%d\n", y);
    
    }
    
    return 0;
}
