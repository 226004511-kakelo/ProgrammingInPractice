#include <stdio.h>

int main(){

double basicSalary, housingAllowance, transportAllowance, grossSalary, netSalary, tax;
const float taxRate = 0.15;

printf("Enter Basic Salary: ");
scanf("%lf", &basicSalary);

printf("Enter Housing Allowance: ");
scanf("%lf", &housingAllowance);

printf("Enter Transport Allowance: ");
scanf("%lf", &transportAllowance);

grossSalary = basicSalary + housingAllowance + transportAllowance;

tax = grossSalary * taxRate;

netSalary = grossSalary - tax;

printf("Gross Salary was: %f\n", grossSalary);
printf("Net Salary was: %f\n", netSalary);



}