#include <stdio.h>
#include <stdlib.h>

int main() {
    int marks[100];
    int size;
    float ave;
    int sum = 0;

    printf("Input Mathematics marks (0 to terminate): ");

    for (int i = 0; ; i++){
        scanf("%d", &marks[i]);
        if(marks[i] == 0){
            size = i;
            break; 
        } 

    }

    for (int j = 0; j < size; j++){
        sum += marks[j];
    }

    ave = sum /(float)size;
    printf("Average marks in Mathematics: %.2f", ave); 
}