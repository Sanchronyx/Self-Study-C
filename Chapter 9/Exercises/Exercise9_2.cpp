#include <stdio.h>

int check (int x, int y, int n)
{
    if (x >= 0 && y >= 0 && x <= n && y <= n)
    {
        return 1;
    }
    else{
        return 0;
    }
}