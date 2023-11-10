#include <stdio.h>

int digit (int n, int k)
{
int i = 0, x;
    while (k > i){  
        x = n % 10;
        n = /10;
        i++;
    }
    if (k == i){
        return x;
    }
    else {
        return 0;
    }
}