#include <stdio.h>
#include "budget.h"





int employeeManagement(){
        
        int choice;
        int done= 0;
        while (done == 0){
        employeeMenu();
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addEmployees();
            break;

        case 2:
            listEmployees();
            break;
            case 3:
            searchEmployees();
        
        break;

        case 4:
        done =1;

        break;
        default:
        printf("invalid option entered");
            break;
        }
    }

        }
