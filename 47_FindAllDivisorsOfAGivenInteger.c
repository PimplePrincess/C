#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;

    printf("Input an integer: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++){
        if (number % i == 0){
            printf("%d\n", i);
        }
    }
}