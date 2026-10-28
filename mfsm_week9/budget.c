#include <stdio.h>
#include "budget.h"


void budgetMenu(){

     printf("\nMUNICIPAL Budget MANAGEMENT\n");
        printf("\n  Select a task:          1. Add budget\n"
            "                            2. List budgets\n"
            "                            3. Exit    ");
}



float calculateBudget(float revenue, float expenses){

    result = revenue -  expenses;
    if (result >0 ){
        printf("\nSURPLUS of N$%.2f\n", result);

    } else if (result<0)
    {
       printf("\nDEFICIT of N$ %.2f\n", result);
    } else{
        printf("\nBALANCED\n");
    }
    
    return result;
}



 void addBudget(){
   
   
      if (budgetCounter < 3){
         printf("\nEnter Budget name:  ");
         scanf("%s" , budgetName[budgetCounter]);

           printf("\n Enter the revenue :  ");
    scanf("%f", &revenue);

    
    printf("\n Enter the expenses :  ");
    scanf("%f", &expenses);



    budgetValue[budgetCounter] = calculateBudget(revenue, expenses);
  
  
       budgetCounter = budgetCounter+1;
       budgetID[budgetCounter-1] = budgetCounter-1;

       printf("\nBudgets entered: %d/3\n", budgetCounter);


      }else{
         printf("\nArray is full\n");

      }

   
 }





void listBudgets(){
      printf("\n--Budget List--\n");
    for (int i = 0; i< budgetCounter; i++){
      printf("\nBudget ID: %d\n", budgetID[i]);
      printf("Budget Name: %s\n", budgetName[i]);
       printf("Budget Balance Value: %.2f\n", budgetValue[i]);

        }
        printf("\n--------------------\n");
   }




int budgetManagement(){
        
        int choice;
        int done= 0;
        while (done == 0){
        budgetMenu();
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addBudget();
            break;

        case 2:
            listBudgets();
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
