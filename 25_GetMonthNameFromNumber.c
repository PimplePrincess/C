#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
    int n;

    printf("Input a number between 1 to 12 to get month name: ");
    scanf("%d", &n);
    
    if (n <= 0 || n > 12){
        printf("Invalid value!\n");
        return 1;
    }

    switch(n){
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
    }
    return 0;
}