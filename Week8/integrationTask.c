#include <stdio.h>
#include <string.h>


  char supplierName[50], email[50], phone[30], town[50], search[50];
    int supplierNameLength, emailLength, townLength;


int addSupplier(){
    printf("Enter supplier name: ");
    fgets(supplierName, sizeof(supplierName), stdin);
    
    printf("Enter supplier email: ");
    fgets(email, sizeof(email), stdin);

    printf("Enter supplier phone: ");
    fgets(phone, sizeof(phone), stdin);

    printf("Enter supplier town: ");
    fgets(town, sizeof(town), stdin);
    return 0;
}

int displaySupplier(){
    printf("\nSupplier Details:\n");

    printf("Name: %s ", supplierName);
    printf("Email: %s", email);
    printf("Phone: %s", phone);
    printf("Town: %s", town);
return 0;
}

int searchSupplier(){

     printf("\nEnter a supplier name to search: ");
    fgets(search , sizeof(search), stdin);

    if (strcmp(supplierName, search) == 0) {
        printf("Supplier found: %s", supplierName);
    } else {
        printf("Supplier not found.\n");
    }
    return 0;
}

int supplierLenght(){
      supplierNameLength = strlen(supplierName);
    emailLength = strlen(email);
    townLength = strlen(town);

    printf("\nSupplier name length: %d\n", supplierNameLength);
    printf("Supplier email length: %d\n", emailLength);
    printf("Supplier town length: %d\n", townLength);
}

int supplierManagement(){
      
    int choice;
    int done= 0;
    while (done == 0){
    printf("\nMUNICIPAL SUPPLIER MANAGEMENT\n");
    printf("\n  Select a task:          1. Add Supplier\n"
           "                            2. Display Supplier\n"
           "                            3. Search Supplier\n"
           "                            4. Show Name Length\n"
           "                            5. Exit    ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        addSupplier();
        break;

    case 2:
        displaySupplier();
        break;
        case 3:
        searchSupplier();
       
    break;

    case 4:

    
        supplierLenght();
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


int main() {
    

      
    int choice;
    int done= 0;
    while (done == 0){
    printf("\nMUNICIPAL MANAGEMENT SYSTEM\n");
    printf("\n  Select a task:          1. Employee Management \n"
           "                            2. Supplier Management\n"
           "                            3. Budget Management\n"
       
           "                            4. Exit    ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        
        break;

    case 2:
        supplierManagement();
        break;
        case 3:
     
       
    break;

    case 4:

    
         done =1;

    break;
    default:
    printf("invalid option entered");
        break;
    }
}

    

}