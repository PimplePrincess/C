#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[5];

    printf("Input the 5 members of the array:\n");

    for (int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array values are:\n");

    for (int j = 0; j < 5; j++){
        if (arr[j] == 0 || arr[j] < 0){
            arr [j] = 100;
        }
        printf("n[%d] = %d\n", j, arr[j]);
    }
    
}