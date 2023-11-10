#include <stdio.h>

int num_digits(int pos_int)
{
int i;
    for (i = 0; pos_int > 0; i++){
    pos_int /= 10;
    }
    return i;
}