#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main(void){
    int a, b, product;

    printf("Please enter the first and second numbers: ");
    scanf("%d %d", &a, &b);

    product = a * b;

    printf("Product: %d\n", product);
        
    return 0;
}
n