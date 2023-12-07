#include <stdio.h>

int main(void){

    //printf("%c", '\n'); Incorrect - %c is not meant to be used to print the newline character
    //printf("%c", "\n"); Incorrect - Cannot print a newline character using %c
    //printf("%s", '\n'); Incorrect
    printf("%s", "\n"); //CORRECT - It does print an extra line  however, this is not standard practice.
    //printf('\n'); Incorrect
    printf("\n"); //CORRECT - Standard practice
    putchar('\n'); //CORRECT
    //putchar("\n"); //CORRECT
    //puts('\n'); //CORRECT
    puts("\n"); //CORRECT
    puts(""); //CORRECT
}