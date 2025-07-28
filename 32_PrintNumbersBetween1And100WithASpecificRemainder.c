#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
    int n;

    printf("Input an integer: ");
    scanf("%d", &n);

    for (int i = 0; i <= 100; i++){
        if (i % n == 3){
            printf("%d\n", i);
        }
    }
}