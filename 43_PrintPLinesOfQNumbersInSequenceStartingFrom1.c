#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    int lines, numbers;
    int counter = 1;

    printf("Input number of lines:");
    scanf("%d", &lines);

    printf("Number of characters in a line");
    scanf("%d", &numbers);

    for (int i = 0; i < lines; i++){
        for (int j = 0; j < numbers; j++){
            printf("%d ", counter);
            counter++;
        }
        printf("\n");
    }
}