#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[5];

    printf("Input the first number of the array: ");
    scanf("%d", &arr[0]);

    printf("n[0] = %d\n", arr[0]);

    for (int j = 1; j < 5; j++){
        arr[j] = 3 * arr[j - 1];
        printf("n[%d] = %d\n", j, arr[j]);
    }
    
}