#include <stdio.h>
#include <stdlib.h>

int main() {
    float S = 0;

    for (int i = 1; i < 51; i++){     
        S += (float)1/i;
    }

    printf("Value of S: %.2f", S);
}