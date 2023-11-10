#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    srand(time(NULL));

    int dir = rand() % 4;
    int x = 0, y = 0, lastx = -1, lasty = -1, count = 0;
    char canvas[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            canvas[i][j] = '.';
        }
    }

    canvas[x][y] = 'A';

    for (int i = 0; i < 26; i++) {
        if (lastx == x && lasty == y) {
            count++;
        } else {
            count = 0;
        }

        if (count > 100) {
            break;
        }

        if (dir == 0) {
            if (x - 1 >= 0 && canvas[x - 1][y] == '.') {
                x--;
            } else {
                i--;
            }
        } else if (dir == 1) {
            if (x + 1 < 10 && canvas[x + 1][y] == '.') {
                x++;
            } else {
                i--;
            }
        } else if (dir == 2) {
            if (y - 1 >= 0 && canvas[x][y - 1] == '.') {
                y--;
            } else {
                i--;
            }
        } else if (dir == 3) {
            if (y + 1 < 10 && canvas[x][y + 1] == '.') {
                y++;
            } else {
                i--;
            }
        }

        lastx = x;
        lasty = y;

        canvas[x][y] = 'A' + i;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c", canvas[i][j]);
        }
        printf("\n");
    }

    return 0;
}
