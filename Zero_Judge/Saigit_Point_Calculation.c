#include <stdio.h>

int main(void){

    int score = 0;
    scanf("%d", &score);
    int calc1 = 0, calc2 = 0, calc3 = 0;

    if (0 <= score && score <= 10){
        calc1 = score * 6;
        printf("%d", calc1);
    }

    else if (11 <= score && score <= 20){
        calc2 = (score - 10) * 2;
        calc2 += 60;
        printf("%d", calc2);
    }

    else if (21 <= score && score <= 39){
        calc3 = (score - 20) * 1;
        calc3 += 80;
        if (calc3 == 100)calc3 = 99;
        printf("%d", calc3);
    }
    
    if (score >= 40)printf("100");

    return 0;
}