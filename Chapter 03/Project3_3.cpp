#include <stdio.h>

int main(void){
    int isbn_gp, isbn_gi, isbn_pc, isbn_in, isbn_cd;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &isbn_gp, &isbn_gi, &isbn_pc, &isbn_in, &isbn_cd);
    printf("GSI Prefix: %d\n", isbn_gp);
    printf("Group Identifier: %d\n", isbn_gi);
    printf("Publisher Code: %d\n", isbn_pc);
    printf("Item Number: %d\n", isbn_in);
    printf("Check Digit: %d\n", isbn_cd);

    return 0;
    
}