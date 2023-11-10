#include <stdio.h>  
#define N 10

void selection_sort (int arr[], int n){

    if (n < 1){
        return;
    }

    int i = 0, temp = 0, index = 0;

    for (i = 0; i < n; i++){
        if (arr[i] > arr[index]){
            index = i;
        }
    }
    
    temp = arr[index];
    arr[index] = arr[n-1];
    arr[n-1] = temp;

    selection_sort(arr, n - 1);
}

int main(void){

    int m[N];
    int i = 0;
    printf("Enter %d integers: ", N);
    for (i = 0; i < N; i++){
    scanf("%d", &m[i]);
    }

    selection_sort(m, N);

    printf("Sorted Array: ");
    for (i = 0; i < N; i++){
        printf("  %d  ", m[i]);
    }

    return 0;
}