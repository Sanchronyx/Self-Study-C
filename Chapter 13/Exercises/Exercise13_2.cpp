#include <stdio.h>

char *p = "abc";

int main(void){

    // putchar(p); Points to the first character in the string
    //putchar(*p); - Only prints ONE (THE BEGINNING) value since the *p is pointing towards 0
    puts(p); //CORRECT // Puts function is designed to print until there is a NULL value
    // puts(*p); Points to the beginning so only prints the first value
}