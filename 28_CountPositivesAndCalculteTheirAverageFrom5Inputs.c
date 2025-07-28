#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
    int arr[5];
    int positive = 0, sum = 0;
    float ave;

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
        if (arr[i] >= 0){
            sum+=arr[i];
            positive++;
        }
    }

    ave = sum / positive;

    printf("Number of positive numbers: %d\n", positive);
    printf("Average value of the said positive numbers: %.2f\n", ave);

    return 0;
}