#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
    int n;

    printf("Input an integer: ");
    scanf("%d", &n);

    printf("List of square of each one of the even values from 1 to a %d :\n", n);

    for (int i = 2; i <= n; i += 2){
        printf("%d ^ %d = %d\n", i, i, i * i);
    }
    
    return 0;
}