#include <stdio.h>

int main() {
     char municipalityName[30];
     char mayorName[30];
     int population;
     printf("Enter Municipality Name:");
     scanf("%s \n", &municipalityName);
     printf("Enter Mayor Name:");
     scanf("%s \n", &mayorName);
     printf("Enter Population:");
     scanf("%d \n", &population);
    
     printf("Municipality: %s\n", municipalityName);
     printf("Mayor: %s\n", mayorName);
     printf("Population: %d\n", population);


}