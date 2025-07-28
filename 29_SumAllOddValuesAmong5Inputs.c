#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
    int arr[5];
    int sum = 0;

    printf("Input the first number: ");
    scanf("%d", &arr[0]);

    printf("Input the second number: ");
    scanf("%d", &arr[1]);

    printf("Input the third number: ");
    scanf("%d", &arr[2]);

    printf("Input the fourth number: ");
    scanf("%d", &arr[3]);

    printf("Input the fifth number: ");
    scanf("%d", &arr[4]);

    for (int i = 0; i < 5; i++){
        if (arr[i] % 2 == 1){
            sum += arr[i];
        }
    }
    
    printf("Sum of all odd values: %d\n", sum);

    return 0;
}