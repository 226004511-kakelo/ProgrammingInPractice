#include <stdio.h>
#include <string.h>
int main(){


    int size = 20;
    char registrations[size][20];
    char search[size];
    int location;
    int found =0;
    for (int i = 0; i <size; i++){

        printf("Enter a registration number:  ");
        scanf("%s", registrations[i]);
    }

    for (int i = 0; i <size; i++){
            printf(" N$: %s ", registrations[i]);

        }

        printf("\nEnter a registration number to search for:  ");
    scanf("%s",  search);
    for (int i = 0; i <size; i++){
        if (search == registrations[i]){
            found = 1;
            location = i;

        }

    }

    if (found == 1) {
        printf("\nThe registration number was found at position %d\n", location);
    } else {
        printf("\nThe value was not found\n");
    }
}