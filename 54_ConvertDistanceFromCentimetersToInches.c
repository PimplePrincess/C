#include <stdio.h>
#include <stdlib.h>

int main() {
    float number;
    float inch;
    
    printf("Input the distance in cm: ");
    scanf("%f", &number);

    inch = number * 0.393701;
    printf("Distance of %.2f cms is = %.2f inches", number, inch);
}