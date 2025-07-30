#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
    int a, b, c;
    int sum = 0;

    printf("Input the first integer:");
    scanf("%d", &a);
    printf("Input the second integer:");
    scanf("%d", &b);

    if (a > b){
        c = b;
        b = a;
        a = c;
    }

    for (int i = a; i <= b; i++){
        if ((i % 17) != 0){
            sum += i;
        }
    }

    printf("Sum: %d", sum);
}