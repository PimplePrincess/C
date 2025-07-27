#include <stdio.h>
#include <locale.h>


int main() {
    int amount;
    int years, months, days;
    printf("Please enter the number of days: \n");
    scanf("%d", &amount);

    years = amount / 365;
    amount = amount - (years * 365);

    months = amount / 30;
    amount = amount - (months * 30);

    days = amount;
    
    printf("%d Year(s)\n%d Month(s)\n%d Day(s)", years, months, days);

    return 0;
}