#include <stdio.h>
#include <math.h>
int main() {
    float banknotes[] = {100, 50, 20, 10, 5, 2, 1};
    int result[7];
    int amount;
    
    printf("Input the amount: ");
    scanf("%d", &amount);

    printf("There are:\n");

    for (int i = 0; i < 7; i++){
        result[i] = amount / banknotes[i];
        amount -= result[i] * banknotes[i];
        printf("%d Note(s) of %.2f\n",result[i], banknotes[i]);
    }
}
