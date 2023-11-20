#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 100

int main(void){
    
    char word[N] = {0}, *p = word, reverse_word[N] = {0}, *r = &reverse_word[0], c; 
    int count1 = 0, count2 = 0;

    printf("Enter a message: ");

    while (((c = getchar()) != '\n' && p < word + N)){
        if (!ispunct((int)c)) {
            c = tolower(c);
            *p++ = c;
            count1++;
        }
    }

    for (int i = count1 - 1; i >= 0; i--) {
        *r++ = word[i];
    }
    
    while (p >= word && r < reverse_word + N) {
        if (*r == *p) count2++;
        p--;
        r++;
    }
    
    printf("%d %d", count1, count2);
    if (count1 == count2)printf("Palindrome");
    else printf("Not a palindrome");

    return 0;
}