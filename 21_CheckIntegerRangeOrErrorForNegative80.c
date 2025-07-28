#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
    int number;

    printf("Input an integer: ");
    scanf("%d", &number);

    if (number < 0 || number > 80){
        printf("Invalid number! (Outside the range)\n");
    } else if (number >= 0 && number <= 20){
        printf("Range [0, 20]\n");
    }else if (number >= 21 && number <= 40){
        printf("Range [20, 40]\n");
    }else if (number >= 41 && number <= 60){
        printf("Range [40, 60]\n");
    }else if (number >= 61 && number <= 80){
        printf("Range [60, 80]\n");
    }
    return 0;
}