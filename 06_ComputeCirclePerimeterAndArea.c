#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main(void){
    float radius,
          perimeter,
          area;

    printf("Please, enter the radius of the circle. At the end press Enter.\n");
    scanf("%f", &radius);

    perimeter = 2 * pi * radius;
    area = pi * pow(2, radius);

    printf("Perimeter: %.4f\n", perimeter);
    printf("Area: %.4f\n", area);
    
    return 0;
}
