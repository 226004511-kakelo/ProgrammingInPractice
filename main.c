#include <stdio.h>

int main() {
     char municipalityName[30];
     char mayorName[30];
     int population;
     printf("Enter Municipality Name:");
     scanf("%s", &municipalityName);
     printf("Enter Mayor Name:");
     scanf("%s", &mayorName);
     printf("Enter Population:");
     scanf(" %d", &population);
    
     printf("Municipality Name: %s\n", municipalityName);
     printf("Mayor Name: %s\n", mayorName);
     printf("Population: %d\n", population);


}