#include <stdio.h>

int main(){
    int size = 50;
    float salaries[size];
    double highest, lowest, average, search, temp;
    double total = 0.00;
    int choice;
    int found = 0;
    int location;
    for (int i = 0; i <size; i++){

        printf("Enter a salary:  ");
        scanf("%f", &salaries[i]);
        total = total + salaries[i];
        if (i==0){
            highest = salaries[i];
            lowest = salaries[i];
         }

         if (salaries[i]>highest){
            highest = salaries[i];

         }

         if (salaries[i]<lowest){
            lowest = salaries[i];

         }

        printf("\nNumber of Salaries Entered: %d/%d\n", i+1 ,size);

    }

    average = total/size;


    printf("\nThe highest salary was: %f\n", highest);
    printf("\nThe lowest salary was: %f\n", lowest);
    printf("\nThe average salary was: %.2f\n", average);
    printf("\nThe total salary was: %.2f\n", total);

    printf("\nWould you like to display all the salaries? Enter '1' if yes and '2' if no:  ");
    scanf("%d", &choice);
    if (choice == 1){
        for (int i = 0; i <size; i++){
            printf("  %.2f  ",salaries[i]);
        }
    }


    printf("\nEnter a salary to search for:  ");
    scanf("%f", &search);
    for (int i = 0; i <size; i++){
        if (search = salaries[i]){
            found = 1;
            location = i;

        }

    }

    if (found == 1) {
        printf("\nThe salary was found at position %d\n", location);
    } else {
        printf("\nThe value was found\n");
    }
    

    
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
            if (salaries[j] > salaries[j + 1]) {
            temp = salaries[j];
            salaries[j] = salaries[j + 1];
            salaries[j + 1] = temp;
            }
           }
          }


         printf("\nSorted list N$: \n");
        for (int i = 0; i <size; i++){
            printf(" N$ %.2f   ", salaries[i]);

        }


}