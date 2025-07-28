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
        printf("The pair is in descending order!\n");
    } else {
        printf("The pair is in ascending order!\n");
    }
}