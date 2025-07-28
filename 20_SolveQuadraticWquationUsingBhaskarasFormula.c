#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
    int a, b, c;
    float root1, root2;

    printf("Input the first number (a): ");
    scanf("%d", &a);
    printf("\n");

    printf("Input the second number (b): ");
    scanf("%d", &b);
    printf("\n");

    printf("Input the third number (c): ");
    scanf("%d", &c);
    printf("\n");

    root1 = (-b + sqrt(b * b - 4 * a * c))/ (2 * a);
    root2 = (-b - sqrt(b * b - 4 * a * c))/ (2 * a);

    printf("Root1 = %.5f\n", root1);
    printf("Root2 = %.5f\n", root2);


    return 0;
}