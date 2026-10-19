#include <stdio.h>
#include "employee.h"



void displayMenu(){
         printf("\nMUNICIPAL MANAGEMENT SYSTEM\n");
    printf("\n  Select a task:          1. Budget Management \n"
           "                            2. Supplier Management\n"
           "                            3. Employee Management\n"
           "                            4. Display Reports \n"
           "                            5. Exit    ");
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
        supplierManagement();
        break;
        case 3:
     
       employeeManagment();
    break;

    case 4:
    

    break;

    case 5:

    
         done =1;

    break;
    default:
    printf("invalid option entered");
        break;
    }
}

    

}