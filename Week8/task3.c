#include <stdio.h>

    float basic,housing, transport, gross;

float calculateSalary(float basic, float housing, float transport){

    gross = basic + transport + housing;
}


int main(){
 
    printf("\n Enter the Basic salary:  ");
    scanf("%f", &basic);

    
    printf("\n Enter the Housing allowance:  ");
    scanf("%f", &housing);

    
    printf("\n Enter the Transport allowance:  ");
    scanf("%f", &transport);


    calculateSalary(basic,housing ,transport);
    printf("\nGross Salary is : %.2f\n", gross);

    return 0;
}