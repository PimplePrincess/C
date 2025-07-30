#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
    int a, b, c;

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
        if (i % 7 == 2 || i % 7 == 3){
            printf("%d\n", i);
        }
    }
}