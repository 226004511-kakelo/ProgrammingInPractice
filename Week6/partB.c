#include <stdio.h>

int main(){
    double average, total = 0.00;
    float temp;
     int size = 4;
    float budgets[size];
   
    for (int i = 0; i <size; i++){

        printf("Enter a budget:  ");
        scanf("%f", &budgets[i]);
        total = total + budgets[i];

        }

        for (int i = 0; i <size; i++){
            printf(" N$: %f ", budgets[i]);

        }
         average = total/size;
        printf("\nTotal budget:  %f\n", total);
       
        printf("\nAverage budget:  %f\n", average);

        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
            if (budgets[j] > budgets[j + 1]) {
            temp = budgets[j];
            budgets[j] = budgets[j + 1];
            budgets[j + 1] = temp;
            }
           }
          }


         printf("\nSorted list N$: \n");
        for (int i = 0; i <size; i++){
            printf(" N$ %.2f   ", budgets[i]);

        }

}