#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
    int arr[5];
    int pos;

    printf("Input 5 integers: ");
    for (int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    int max = 0;


    for (int j = 1; j < 5; j++){
        if (arr[j] > max) {
            max = arr[j];
            pos = j;
        }    
    }

    printf("Highest value: %d\n", max);
    printf("Position: %d\n", pos + 1);
}