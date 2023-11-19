#include <stdio.h>

int main(void){
    short int i, n;
    char ch;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        printf("%10d%10d\n", i, i*i);
        if (i % 24 == 0){
            do
            printf("Press Enter to continue");
            while ((ch = getchar ()) != '\n')
            ;
        }
    }
    return 0;
}