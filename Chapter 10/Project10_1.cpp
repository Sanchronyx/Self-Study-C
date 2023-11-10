#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
char top = 0;

void make_empty(void){
    top = 0;
}

bool is_empty(void){
    return top == 0;
}

bool is_full(void){
    return top == STACK_SIZE;
}

void stack_overflow(void){
    printf("STACK OVERFLOW");
    exit(1);
}

void push (char i){
    if (is_full()){
        stack_overflow();
    }
    else {
        contents [top++] = i;
    }
}

void stack_underflow(void){
    printf("STACK UNDERFLOW");
    exit(1);
}

char pop (void){
    if (is_empty()){
        stack_underflow();
    }
        else {
            return contents[--top];
        }
}

int main(void){

    char c = 0;
    bool check = true;

    printf("Enter parentheses and/or braces: ");
    while ((c = getchar()) != EOF && c != '\n'){
        if (c == '(' || c == '{'){
            push(c);
        }
        else if (c == ')' || c == '}'){
            if (is_empty() || (c == ')' && pop() != '(') || (c == '}' && pop() != '{')){
                check = false;
                break;
            }
        }
    } 
    if (!is_empty){
        check = false;
    }

    if (check)printf("Parentheses/Braces are nested properly.\n");
    else printf("Parenthesis/Braces are not nested properly.\n");

    return 0;
}