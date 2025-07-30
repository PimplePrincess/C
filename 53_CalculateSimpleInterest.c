#include <stdio.h>
#include <stdlib.h>

int main() {
    int p, t;
    float r;
    int S;

    printf("Input Data:\n");
    printf("p = ");
    scanf("%d", &p);
    printf("r = ");
    scanf("%f", &r);
    printf("t = ");
    scanf("%d", &t);
    
    S = (p * t * r) / 100;
    printf("Simple interest = %d", S);
}