#include <stdio.h>
#include <ctype.h>

int main(void){
    printf("Enter a sentence: ");
    int sum = 0;
    char ch;
    while ((ch = getchar()) != ('\n')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
            sum += 1;
        }
    }
    printf("Your sentence contains %d vowels", sum);
    return 0;
}
        
         /*switch (ch){
            case 'a': case 'e': case 'i': case 'o': case 'u':
            sum += 1;
            break;
        }*/