#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
    int a, b, c;
    float perimeter;

    printf("Input the first number: ");
    scanf("%d", &a);

    printf("Input the second number: ");
    scanf("%d", &b);

    printf("Input the third number: ");
    scanf("%d", &c);

    if (a + b > c && a + c > b && b + c > a){
        perimeter = a + b + c;
        printf("Perimeter = %.1f\n", perimeter);
    } else {
        printf("Triangle doesn't exist!\n");
    }

    return 0;
}