#ifndef BUDGET_H
#define BUDGET_H

      float revenue, expenses, result;
     int budgetCounter = 0;
   int budgetID[3];
    char budgetName[3][50];
 float budgetValue[3];
        void budgetMenu();
          void addBudget();
           
           void listBudgets();
        
     
          int budgetManagement();
         float calculateBudget(float revenue, float expenses);



#endif