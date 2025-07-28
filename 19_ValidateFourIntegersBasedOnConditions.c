#include <stdio.h>
#include <locale.h>


int main() {
    int p, q, r, s;

    printf("Input the first integer: ");
    scanf("%d", &p);
    printf("\n");

    printf("Input the second integer: ");
    scanf("%d", &q);
    printf("\n");

    printf("Input the third integer: ");
    scanf("%d", &r);
    printf("\n");

    printf("Input the fourth integer: ");
    scanf("%d", &s);
    printf("\n");

    if (p % 2 == 0 && q >= 0 && r >= 0 && s >= 0){
        if (q > r && s > p && r + s > p + q){
            printf("Correct values\n");
        } 
    }else {
            printf("Wrong values\n");
    }

    return 0;
}