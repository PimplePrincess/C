#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y;
    printf("Input value for x % y:");
    scanf("%d %d", &x, &y);

    printf("Before swapping the value of x & y: %d %d\n", x, y);
    printf("After swapping the value of x & y: %d %d\n", y, x);

}