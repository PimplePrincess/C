#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[5];
    int pos;

    printf("Input the 5 members of the array:\n");

    for (int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    int min = arr[0];

    for (int j = 0; j < 5; j++){
        if (arr[j] < min){
            min = arr[j];
            pos = j;
        }
    }

    printf("Smallest Value: %d\n", min);
    printf("Position of the element: %d", pos);
}