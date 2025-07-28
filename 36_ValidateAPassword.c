#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
    printf("Input the password:");
    int arr[4] = {1, 2, 3, 4};
    int enter[4];
    int flag = 0;

    for (int i = 0; i < 4; i++){
        scanf("%d", &enter[i]);
    }

    for (int i = 0; i < 4; i++){
       if (arr[i] == enter[i]) flag = 1; else flag = 0;
    }

    
    if (flag) printf("Correct password\n"); else printf("Incorrect password!\n");

}