#include <stdio.h>

int main(void){
    int weekend[7] = {1, 0, 0, 0, 0, 0, 1}, i;
    printf("%d", weekend);

    for (i =  1; i < 6; i++){
        printf("%d", weekend[i]);
    }
    return 0;
}