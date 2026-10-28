#include <stdio.h>

#include "utilities.h"
float getAverage(float enteredSet[], int setSize){
        for (int i =0; i<setSize; i++){
           total= enteredSet[i] +total;

        }
    average = total/setSize;
    return average;
}

float getHighest(float enteredSet[], int setSize){
        highest = enteredSet[0];
         for (int i =0; i<setSize; i++){
         if (highest< enteredSet[i]){
            highest = enteredSet[i];
         }

        }
            return highest;
}
