#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
    int n;

    printf("Input an integer: ");
    scanf("%d", &n);

    if (n >= 0){
        printf("Positive ");
    } else {
        printf ("Negative ");
    }

    if (n % 2 == 0){
        printf("Even\n");
    } else {
        printf("Odd");
    }

    return 0;
}