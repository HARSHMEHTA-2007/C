#include <stdio.h>

float calculate_net_salary(float gross_salary) {
    float allowance = 0, deduction = 0;

    if (gross_salary > 10000) {
        allowance = gross_salary * 0.10;
        deduction = gross_salary * 0.03;
    } else if (gross_salary > 5000) {
        allowance = gross_salary * 0.07;

                deduction = gross_salary * 0.02;
    }

    float net_salary = gross_salary + allowance - deduction;
    return net_salary;
}

int main() {
    float gross_salary, net_salary;

    printf("Enter gross salary: ");
    scanf("%f", &gross_salary);

    net_salary = calculate_net_salary(gross_salary);

    printf("Net Salary: %.2f\n", net_salary);

    return 0;
}
