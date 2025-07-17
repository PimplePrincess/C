#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main(void){
    int days_amount, 
    years,
    weeks,
    days;

    printf("Specify the number of days\n");
    printf("Number of days: ");
    scanf("%d", &days_amount);

    years = days_amount / 365;
    days_amount = days_amount - (years * 365);
    weeks = days_amount / 7;
    days_amount = days_amount - (weeks * 7);

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days_amount);

        
    return 0;
}
