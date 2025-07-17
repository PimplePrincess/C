#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main(void){
    int a, b, sum;

    printf("Please enter the first and second numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum: %d\n", sum);
        
    return 0;
}
