#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

#define ALPHABET 26
#define COLUMN 10
#define ROW 10

int main(void){
    char grid[ROW][COLUMN] = {{0}};
    int walk_check[ROW][COLUMN] = false;
    int up_down[] = {0, 0, 1, -1};
    int left_right[] = {-1, 1, 0, 0};
    
    int i = 0, j = 0;
    srand(time)

    for (i = 0; i < ROW; i++){
        for (j = 0; j < COLUMN; j++){
            grid[i][j] = '.';
        }
    }
}