#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
    int x, y;

    printf("Input the Coordinate(x, y):\n");
    printf("x: ");
    
    scanf("%d", &x);

    printf("y: ");
    scanf("%d", &y);

    if (x >= 0 && y >= 0){
        printf("Quadrant - I(+, +)");
    } else if (x < 0 && y >= 0){
        printf("Quadrant - II(-, +)");
    } else if (x < 0 && y < 0){
        printf("Quadrant - III(-, -)");
    } else {
        printf("Quadrant - IV(+, -)");
    }
}