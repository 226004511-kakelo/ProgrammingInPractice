#include <stdio.h>
#include "employee.h"

void employeeMenu(){

     printf("\nMUNICIPAL Employee MANAGEMENT\n");
        printf("\n  Select a task:          1. Add Employee\n"
            "                            2. List Employees\n"
            "                            3. Search Employee\n"
            "                            4. Exit    ");
}

 void addEmployees(){
   
   
      if (employeeCouner < 3){
         printf("\nEnter Employee name:  ");
         scanf("%s" , employeeName[employeeCouner]);

         printf("\nEnter Employee Phone:  ");
         scanf("%d", &employeePhone[employeeCouner]);

         printf("\nEnter Employee Salary:  ");
         scanf("%f", employeeSalary[employeeCouner]);

       employeeCouner = employeeCouner+1;
       employeeID[employeeCouner-1] = employeeCouner-1;

       printf("\nEmployees entered: %d/3\n", employeeCouner);


      }else{
         printf("\nArray is full\n");

      }

   
 }

 void listEmployees(){
      printf("\n--Employee List--\n");
    for (int i = 0; i< employeeCouner; i++){
      printf("\nEmployee ID: %d\n", employeeID[i]);
      printf("Employee Name: %s\n", employeeName[i]);
       printf("Salary: %f\n", employeeSalary[i]);
       printf("Phone: %d\n", employeePhone[i]);
      
        }
        printf("\n--------------------\n");
   }


void searchEmployees(){
      int found = 0;
      int searchID;
      printf("Enter ID of Employee to be searched for:  ");
      scanf("%d", &searchID);
      for (int i = 0; i <= 3; i++) {
         if (searchID == employeeID[i]) {
            found = 1;
            
            
         }

      }
      if (found == 1){
         printf("Employee found\n");
      } else
       { printf("Employee not found\n");}
     
   }








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
    return 0;
        }
