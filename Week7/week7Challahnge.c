#include <stdio.h>
#include <string.h>

int main() {


    int supplierCouner = 0;
    
    char supplierName[5][50];
    char email[5][50];
    int phone[5][10];
    char town[5][50];
    char search[50];
   
   
    int supplierNameLength;
    int choice;
    int done= 0;
    while (done == 0){
    printf("\nMUNICIPAL FINANCIAL MANAGEMENT\n");
    printf("\n  Select a task:          1. Add Supplier\n"
           "                            2. Display Supplier\n"
           "                            3. Search Supplier\n"
           "                            4. Show Name Length\n"
           "                            5. Exit    ");
    
    scanf("%d", &choice);
    getchar();
    switch (choice)
    {
    case 1:

    for ( supplierCouner; supplierCouner < 5; supplierCouner++){
      if (supplierCouner < 5){    
        printf("Enter supplier name: ");

    fgets(supplierName[supplierCouner], sizeof(supplierName[supplierCouner]), stdin);
    
    printf("\nEnter supplier email: ");
    fgets(email[supplierCouner], sizeof(email[supplierCouner]), stdin);

    printf("\nEnter supplier phone: ");
    scanf("%d", &phone[supplierCouner]);

    printf("\nEnter supplier town: ");
    fgets(town[supplierCouner], sizeof(town[supplierCouner]), stdin);
      }
      }
        break;


    case 2:
     printf("\nSupplier Details:\n");
      if (supplierCouner > 0){
       for (int i = 0; i < 5; i++){
        printf("\n\n");
        printf("\n Supplier # %d\n" , i);
    printf("\nName: %s \n", supplierName[i]);
    printf("\nEmail: %s\n", email[i]);
    printf("\nPhone: %s\n", phone[i]);
    printf("\nTown: %s\n", town[i]);
        }

      }else 
      {printf("\nNo suppliers stored yet\n");}



        break;


        case 3: {
        int found = 0;
        printf("\nEnter a supplier name to search: ");
    fgets(search , sizeof(search), stdin);
    for (int i = 0; i<5; i++){
    if (strcmp(supplierName[i], search) == 0) {
        found = 1;
        }
    }
    if (found == 1){
        printf("\nSupplier found\n");
    } else {
        printf("\nSupplier not found.\n");
    }
    }

    break;


    case 4:
    int index;
    printf("Enter the Supplier number whose lenght is to be determined");
    scanf("%d", &index);
    index = index -1;
    supplierNameLength = strlen(supplierName[index]);
   

    printf("\nSupplier name %c length: %d\n", supplierNameLength, supplierName[index]);
    

    break;

    case 5:

    done =1;

    break;
    default:
    printf("invalid option entered");
        break;
    }
}

    

    

    

}