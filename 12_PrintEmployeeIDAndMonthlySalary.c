#include <stdio.h>

int main(void){
    char id[11];
    int hours,
        salary;
    float resultSalary;

    printf("Input the Employees ID (Max. 10 chars):\n");
    scanf("%10s", id);
    printf("Input the working hours:\n");
    scanf("%d", &hours);
    printf("Input the salary amount/hour:\n");
    scanf("%d", &salary);

    resultSalary = hours * salary;
    printf("Employees ID = %s\n", id);
    printf("Salary = U$ %.2f", resultSalary);

    return 0;
}
