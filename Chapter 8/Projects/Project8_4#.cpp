#include <stdio.h>

#define M ((int) (sizeof(M) / sizeof(M[0])))

int main (void){
    int M[10] = {sizeof(a) / sizeof(a)[0]}, i;
    int N = M[0];

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }

    printf("In reverse order: ");
    for (i = N -1; i >0; i--){
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}
