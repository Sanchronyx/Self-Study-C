#include <stdio.h>

int main(void){

    int array[5][5] = {{0}};
    int row = sizeof(array)/sizeof(array[0]);
    int coloumn = sizeof(array[0])/sizeof(array[0][0]);
    int i, j, row_sum = 0, coloumn_sum = 0;

    for (i = 0; i < row; i++){
        printf("Enter row %d: ", i+1);
        for (j = 0; j < coloumn; j++){
            scanf("%d", &array[i][j]);
            }
        printf("\n");
    }

    row_sum = 0;
    for (i = 0; i < row; i++){
        if (row_sum == 0){
            printf("Row Totals: ");
        }
        row_sum = 0;
        for (j = 0; j < coloumn; j++){
            row_sum += array[i][j];
        }
        printf("%d  ", row_sum);
    }
    printf("\n");
    
    for (j = 0; j < coloumn; j++){
        if (coloumn_sum == 0){
            printf("Coloumn Totals: ");
        }
        coloumn_sum = 0;
        for (i = 0; i < row; i++){
            coloumn_sum += array[i][j];
        }
        printf(" %d  ", coloumn_sum);
    }
    printf("\n");
    return 0;
}



/*for (i = 0; i < row; i++){
        for (j = 0; j < coloumn; j++){
            row_sum += array[i][j];
        }
    }
    
    for (j = 0; j < coloumn; j++){
        for (i = 0; i < row; i++){
            coloumn_sum += array[i][j];
        }
    }

    /*for (i = 0; i < row; i++){
        for (j = 0; j < coloumn; j++){
        }
    }*/