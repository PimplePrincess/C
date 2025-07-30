#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
    int a, b;
    float res;

    printf("Input two numbers:\n");
    printf("x: ");
    scanf("%d", &a);
    printf("y: ");
    scanf("%d", &b);

    res = a / b;

    if (a % b == 0 ) printf("Expected Output: %.1f", res); else printf("Division is not possible");
}