#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
    int arr[5];
    int positive = 0, negative = 0;

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
        (arr[i] >= 0)? positive++ : negative++;
    }

    printf("Number of positive numbers: %d\n", positive);
    printf("Number of negative numbers: %d\n", negative);

    return 0;
}