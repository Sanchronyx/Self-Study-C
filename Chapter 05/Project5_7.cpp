#include <stdio.h>

int main(void){
    int a, b, c, d;
    printf("Please enter 4 integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b && a > c  && a > d){
        printf("Largest: %d\n", a);
    }
    else if (b > a && b > c  && b > d){
        printf("Largest: %d\n", b);
    }
    else if (c > b && c > a  && c > d){
        printf("Largest: %d\n", c);
    }
    else if (d > b && d > c  && d > a){
        printf("Largest: %d\n", d);
    }

    if (a < b && a < c && a < d){
        printf("Smallest: %d\n", a);
    }
    else if (b < a && b < c && b < d){
        printf("Smallest: %d\n", b);
    }
    else if (c < b && c < a && c < d){
        printf("Smallest: %d\n", c);
    }
    else if (d < b && d < c && a > d){
        printf("Smallest: %d\n", a);
    }

    return 0;
}