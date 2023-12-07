#include <stdio.h>

int main(void){

    int i = 0, j = 0;
    char s[100];

    scanf("%d%s%d", &i, s, &j);
    printf("%d%s%d", i, s, j);
    //RESULT: 12abc3456
}
