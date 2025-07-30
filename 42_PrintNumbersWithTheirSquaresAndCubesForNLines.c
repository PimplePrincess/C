#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    int lines;
    int result;

    printf("Input number of lines:");
    scanf("%d", &lines);

    for (int i = 1; i <= lines; i++){
        for (int j = 1; j <= 3; j++){           
            result = (int)round(pow(i,j));
            printf("%d ", result);
        }
        printf("\n");
    } 
}