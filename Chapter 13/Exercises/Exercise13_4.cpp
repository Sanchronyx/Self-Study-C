#include <stdio.h>
#include <string.h>
#include <ctype.h>


/*****************************  ORIGINAL CODE   *******************************/
// int read_line(char str[], int n){
    
//     int ch, i = 0;

//     while ((ch = getchar()) != '\n')
//         if (i < n)
//             str[i++] = ch;
//     str[i] = '\0';
//     return i;
// }

// int main(void){
    
//     char ch[100];
//     int j = read_line(ch, 100);

//     printf("%s %d", ch, j);

// }

/************************************   QUESTION ONE    *********************************/
// int read_line(char str[], int n){
    
//     int ch, i = 0;

//     while (scanf("%1d", &ch)){
//         if (ch != ' ');
//         str[i++] = ch;
//         break;
//     }

//     while ((ch = getchar()) != '\n')
//         if (i < n)
//             str[i++] = ch;
//     str[i] = '\0';
//     return i;
// }

// int main(void){
    
//     char ch[100];
//     int j = read_line(ch, 100);

//     printf("%s %d", ch, j);

//}

/************************************   QUESTION TWO    *********************************/
// int read_line(char str[], int n){
    
//     int ch, i = 0, result = 0;

//     while (scanf("%1d", &ch)){
//         if (ch != ' ');
//         str[i++] = ch;
//         break;
//     }

//     while ((ch = getchar()) != '\n'){
//         if (i < n){
//             str[i] = ch;
//         }
//         if (isspace(str[i])){
//             str[i] = '\0';
//             break;
//         }
//         i++;
//     }
//     return i;
// }

// int main(void){
    
//     char ch[100];
//     int j = read_line(ch, 100);

//     printf("%s %d", ch, j);
// }

/************************************   QUESTION THREE    *********************************/
// int read_line(char str[], int n){
    
//     int ch, i = 0;

//     while ((ch = getchar())){
//         if (i < n)str[i] = ch;
//         if (str[i] == '\n')break;
//         i++;
//     }
//     str[i] = '\0';
//     return i;
// }

// int main(void){
    
//     char ch[100];
//     int j = read_line(ch, 100);

//     printf("%s %d", ch, j);

// }

/************************************   QUESTION FOUR    *********************************/
int read_line(char str[], int n){
    
    int ch, i = 0;

    while ((ch = getchar() != '\n')){
        if (i < n)str[i++] = ch;
        else if (i > n)break;
    }
    str[i] = '\0';
    return i;
}

int main(void){
    
    char ch[100];
    int j = read_line(ch, 100);

    printf("%s %d", ch, j);

}