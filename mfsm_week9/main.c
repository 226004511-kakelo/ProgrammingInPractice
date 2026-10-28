#include <stdio.h>
#include "employee.h"
#include "budget.h"
#include "reports.h"
#include "utilities.h"


void displayMenu(){
         printf("\nMUNICIPAL MANAGEMENT SYSTEM\n");
    printf("\n  Select a task:          1. Budget Management \n"
           "                            2. Employee Management\n"
           "                            3. Display Reports \n"
           "                            4. Exit    ");
}



int main() {
    
    
      
    int choice;
    int done= 0;
    while (done == 0){

     displayMenu();

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        budgetManagement();
        break;

        case 2:
     
       employeeManagement();
    break;

    case 3:
        reports();

    break;

    case 4:

    
         done =1;

    break;
    default:
    printf("invalid option entered");
        break;
    }
}

    return 0;

}