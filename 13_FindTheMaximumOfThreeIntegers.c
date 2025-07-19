#include <stdio.h>

int main() {
   int numbers[3];
    int max = -1;

    printf("Input the first integer: ");
    scanf("%d", &numbers[0]);
    printf("Input the second integer: ");
    scanf("%d", &numbers[1]);
    printf("Input the third integer: ");
    scanf("%d", &numbers[2]);

    for (int i = 0; i < 3; i++){
        if (numbers[i] > max){
            max = numbers[i];
        }
    }
    
    printf("Maximum value of three integers: %d", max);
}
