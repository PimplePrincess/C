#include <stdio.h>

int main(void){
    double itemsList [2];
    double itemsWeightList[2];
    int i = 1;
    double average;

    do{
        printf("Please enter the weight of item %d: \n", i);
        scanf("%lf", &itemsWeightList[i - 1]);
        printf("Please enter the number of item %d: \n", i);
        scanf("%lf", &itemsList[i - 1]);
        i++;
    } while (i < 3);

    average = ((itemsList[0] * itemsWeightList[0]) + (itemsList[1] * itemsWeightList[1])) / (float)(itemsList[0] + itemsList[1]);
    printf("%f\n", average);
        
    return 0;
}
