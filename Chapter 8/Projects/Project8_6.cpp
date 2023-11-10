/*
The prototypical Internet newbie is a fellow named BIFF, who has a unique way of writing
messages. Here's a typical BIFF communique:
H3Y DUD3, C 15 R1LLY COOL!!!!!!!!1!
Write a “BIFF filter"
that reads a message entered by the user and translates it into B 1 FFspeak;
Enter message: Hey dude, C is rilly cool
In BIFF- speak: H3Y DUD3, C 15 RILLY COOL!!!!!!!!!!
Your program should convert the message to upper-case letters, substitute digits for certain
letters ( A—>4. B—>8. E—>3, 1—» 1 , ()
->(). S—>5). and then append 10 or so exclamation marks.
Hint: Store the original message in an array of characters, then go back through the array,
translating and printing characters one by one.
*/

#include <stdio.h>
#include <ctype.h>

#define CH ((char) (sizeof(ch) / sizeof(ch[0])))

int main(void){

    char c, ch[100];
    int i = 0;

    printf("Enter a message: ");

    while ((c = getchar()) != '\n'){
        ch[i] = toupper(c);

        switch (ch[i]){
        case 'A':
        ch[i] = '4';
        break;

        case 'B':
        ch[i] = '8';
        break;
        
        case 'E':
        ch[i] = '3';
        break;

        case 'O':
        ch[i]= '0';
        break;

        case 'I':
        ch[i] = '1';
        break;

        case 'S':
        ch[i] = '5';
        break;
    }
    i++;
    }
    int j;

    for (j = 0; j < 10; j++){
        ch[i++] = '!';
    }
    printf("In B1FF-Speak: ");
    for (j = 0; j < i; j++){
        printf("%c", ch[j]);
    }
    return 0;
}