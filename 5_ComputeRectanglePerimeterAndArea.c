#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main(void){
    int a, b,
    perimeter, area;

    printf("Please, enter the sides of the rectangle. At the end press Enter.\n");
    scanf("%d %d", &a, &b);

    perimeter = 2 * (a + b);
    area = a * b;

    printf("Perimeter: %d\n", perimeter);
    printf("Area: %d\n", area);
    
    return 0;
}
