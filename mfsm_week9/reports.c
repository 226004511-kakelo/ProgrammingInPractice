#include <stdio.h>
#include "budget.h"
#include "employee.h"
#include "reports.h"
void reportMenu(){
         printf("\nMUNICIPAL REPORT SYSTEM\n");
    printf("\n  Select a task:          1. Budget Report \n"
           "                            2. Employee Report\n"
           "                            3. Exit    ");
}






 void budgetReport(){
     printf("\n BUDGET REPORT \n");
    listBudgets();
    printf("\n %f--Average Budget\n", getAverage(budgetValue, budgetCounter));
    printf("\n %f--Highest Budget\n", getHighest(budgetValue, budgetCounter));

    printf("\n %d/3 Budgets Entered \n", budgetCounter);


 }

 void employeeReport(){
     printf("\n EMPLOYEE REPORT \n");
    listEmployees();
    printf("\n %f--Average Salary\n", getAverage(employeeSalary, employeeCouner));
    printf("\n %f--Highest Salary\n", getHighest(employeeSalary, employeeCouner));

    printf("\n %d/3 Employees Entered \n", employeeCouner);


 }





int reports() {
    
    
      
    int choice;
    int done= 0;
    while (done == 0){

     reportMenu();

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        budgetReport();
        break;

    case 2:
      
       employeeReport();
    break;

    case 3:
    
         done =1;

    break;
    default:
    printf("invalid option entered");
        break;
    }
}

    
return 0;
}