#include <stdio.h>

    float vat;
    float amount; 

float calculateVAT(float amount){
    vat = amount*0.15;
    return vat;
}


int main(){

    printf("\n Enter the amount to be taxed:  ");
    scanf("%f", &amount);
    calculateVAT(amount);
    printf("\nVat was : %.2f\n", vat);
    return 0;
}