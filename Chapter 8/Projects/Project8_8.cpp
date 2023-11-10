#include <stdio.h>

int main(void){
    int grade[5][5]= {{0}};
    int student = sizeof(grade) / sizeof(grade[0]);
    int quiz = sizeof(grade[0]) / sizeof(grade[0][0]);
    int i, j;

    for (i = 0; i < student; i++){
        printf("Enter five quiz scores of student %d: ", i+1);
        for (j = 0; j < quiz; j++){
            scanf("%d", &grade[i][j]);
        }
    }

    int total_score = 0, average_cs = 0;

    for (i = 0; i < student; i++){
        total_score = 0;
        average_cs = 0;
        for (j = 0; j < quiz; j++){
            total_score += grade[i][j];
        }
        average_cs = total_score / 5;
        printf("Student %d total score and average: %d & %d\n", i+1, total_score, average_cs);
    }

    int average_qz = 0, high_score = 0, low_score = 0;
    int total = 0;

    for (j = 0; j < quiz; j++){
        average_qz = 0; 
        high_score = 0;
        low_score = 0;
        for (i = 0; i < student; i++){
            total += grade[i][j];
            if (grade[i][j] > high_score){
                high_score = grade[i][j];
            }
            else if (low_score == 0){
                low_score = grade[i][j];
            }
            else if (low_score > grade[i][j]){
                low_score = grade[i][j];
            }
        }
        average_qz = total / student;
        printf("The lowest, highest quiz score & quiz average: %d %d %d\n", low_score, high_score, average_qz);
    }

    return 0;
}