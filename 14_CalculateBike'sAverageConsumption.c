#include <stdio.h>

int main() {
    int distance;
    float litters, consum;

    printf("Please, enter the distance in km: ");
    scanf("%d", &distance);

    printf("Please, enter the amount of fuel in liters: ");
    scanf("%f", &litters);

    consum = distance / litters;
    printf("Average consumption (km/lt) %.3f", consum);
}
