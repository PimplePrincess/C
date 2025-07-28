#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
    int a, b , c;
    int counter = 0;
    int sum = 0;

    printf("Input first number of the pair: ");
    scanf("%d", &a);

    printf("Input second number of the pair: ");
    scanf("%d", &b);

    if (a > b){
        c = a;
        a = b;
        b = c;
    }

    for (int i = a; i < b; i++ ){
        if (i % 2 == 1){
            counter++;
            sum += i;
        }
    }

    printf("List of odd numbers: %d\n", counter);

    for (int i = a; i <= b; i++ ){
        if (i % 2 == 1){
            printf("%d\n", i);
        }
    }

    printf("Sum = %d\n", sum);
}