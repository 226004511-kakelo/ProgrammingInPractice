#ifndef REPORTS_H
#define REPORTS_H

      float revenue, expenses, result;
    
   int budgetID[3];
    char budgetName[3][50];
 float budgetValue[3];
        void reportMenu();
          void budgetReport();
           
           void employeeReport();
        float getAverage(float set[], int setSize);
    float getHighest(float set[], int setSize);
     
          int reports();




#endif