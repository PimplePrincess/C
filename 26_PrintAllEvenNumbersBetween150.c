#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
    int n;

    printf("Even numbers between 1 to 50 (inclusive):\n");

    for (int i = 1; i < 51; i++){
        if (i % 2 == 0) printf("%d ", i);
    }

    return 0;
}