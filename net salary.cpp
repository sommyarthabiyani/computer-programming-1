#include <stdio.h>
#include <conio.h>

int main() {
    float grossSalary, allowance = 0.0, deduction = 0.0, netSalary;

	printf("Enter your gross salary: ");
    scanf("%f", &grossSalary);

    if (grossSalary > 10000) {
        allowance = grossSalary * 0.10;   
        deduction = grossSalary * 0.03;
    } else if (grossSalary > 5000) {
        allowance = grossSalary * 0.07;   
        deduction = grossSalary * 0.02;   
    }


    netSalary = grossSalary + allowance - deduction;

   
    printf("Net Salary: %.2f\n", netSalary);

    getch();
}