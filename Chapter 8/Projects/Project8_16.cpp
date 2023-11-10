    #include <stdio.h>
    #include <stdbool.h>
    #include <ctype.h> 

    #define ABC 26

    int main(void){

    bool track[ABC] = {false};
    //char ALPH[ABC] = {a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z};
    int alphi[ABC] = {0};
    char c;
    int ch, i = 0, index = 0;

    printf("Enter first word: ");
    while ((c = getchar()) != '\n' && i < ABC){
        c = tolower(c);
        if (c >= 'a' && c <= 'z'){
            index = c - 'a';
            track[index] = true;
            alphi[index]++;
        }
    i++;
    }

    int j = 0;

    printf("Enter second word: ");
    while ((c = getchar()) != '\n' && j < ABC){
        if (c >= 'a' && c <= 'z'){
            index = c - 'a';
            if (track[index]){
                alphi[index]--;
            }
            else {
                track[index] = true;
                alphi[index]++;
            }
        }  
       j++; 
    }

    int k;
    bool areAnagrams = true;

    for (k = 0; k < ABC; k++){
        if (alphi[k] != 0){
            areAnagrams = false;
            break;
        }
    }

    if (areAnagrams){
        printf("The words are anagrams.");
    }
    else if (!areAnagrams){
        printf("The words are not anagrams.");
    }
    return 0;
    }