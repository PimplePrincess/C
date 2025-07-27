#include <stdio.h>
#include <locale.h>


int main() {
    int amount;
    int hours, minutes, seconds;
    printf("Please enter the number of seconds: \n");
    scanf("%d", &amount);

    hours = amount / 3600;
    amount = amount - (hours * 3600);

    minutes = amount / 60;
    amount = amount - (minutes * 60);

    seconds = amount ;
    
    printf("H:M:S - %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}