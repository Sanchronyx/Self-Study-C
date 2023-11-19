#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int roll_dice(void){

    int first_roll = rand() % 6 + 1;
    int sec_roll = rand() % 6 + 1;
    int sum = first_roll + sec_roll;

    return sum;
}

bool play_game(void){

    bool point = false, out = false;
    int check = 0;
    int check1 = 0, check2 = 0, check3 = 0, check4 = 0, check5 = 0, check6 = 0;

    while (1){

        int roll_result = roll_dice();
        if (roll_result == 7 || roll_result == 11){
            printf("You win!\n");
            return true;
            out = true;
        }
        else if (roll_result == 2 || roll_result == 3 || roll_result == 12){
            printf("You lose!\n");
            return false;
            out = true;
        }
        else {
            switch (roll_result){
                case 1:
                point = true;
                printf("Your point is 1\n");
                check++;
                break;
                case 4:
                point = true;
                printf("Your point is 4\n");
                check1++;
                break;
                case 5:
                point = true;
                printf("Your point is 5\n");
                check2++;
                break;
                case 6:
                point = true;
                printf("Your point is 6\n");
                check3++;
                break;
                case 8:
                point = true;
                printf("Your point is 8\n");
                check4++;
                break;
                case 9:
                point = true;
                printf("Your point is 9\n");
                check5++;
                break;
                case 10:
                point = true;
                printf("Your point is 10\n");
                check6++;
                break;
            }
        }
        if (check >= 2 || check1 >= 2 || check2 >= 2 || check3 >= 2 || check4 >= 2 || check5 >= 2 || check6 >= 2){
            printf("You win!\n");
            return true;
            out = true;
        }
        if (out)break;
    }
}


int main(void){

    srand ((unsigned) time(NULL));
    bool check = true;
    int wins = 0, loss = 0;

    while (check){

        char prompt;

        if (play_game())wins++;
        else loss++;

        printf("Do you want to play again?\n");
        scanf(" %c", &prompt);

        if (prompt == 'y' || prompt == 'Y'){
            check = true;
        }
        else{
            printf("Wins: %d\tLosses: %d\n", wins, loss);
            check = false;
        }
    }
    return 0;
}

