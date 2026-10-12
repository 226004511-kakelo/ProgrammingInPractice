#include <stdio.h>

int employeeIDs[5] = {101, 102, 103, 104, 105};
int id ; 
int searchEmployee(int id, int employeeIDs[]){
   for (int i =0; i <5; i++){
        if (id == employeeIDs[i]){
            return i;
        }

   }
   return -1;
}


int main(){
     printf("\nEnter id of employee to be searched:  ");
    scanf("%d", &id);
    
    printf("The employee was found at %d", searchEmployee( id,  employeeIDs) );
}