#include <stdio.h>
#include <stdlib.h>

int main() {
    float arr[5];

    printf("Input the 5 members of the array:\n");
    
    for (int i = 0; i < 5; i++){
        scanf("%f", &arr[i]);
    }
    

    for (int j = 0; j < 5; j++){
        if (arr[j] < 5){
            printf("A[%d] = %.1f\n", j, arr[j]);
        }
    }
    
}