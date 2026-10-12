#include <stdio.h>

    float revenue,expenses, result;

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


int main(){
 
    printf("\n Enter the revenue :  ");
    scanf("%f", &revenue);

    
    printf("\n Enter the expenses :  ");
    scanf("%f", &expenses);



    calculateBudget(revenue ,expenses);
  

    return 0;
}