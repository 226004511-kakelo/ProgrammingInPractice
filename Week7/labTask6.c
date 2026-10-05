#include <stdio.h>
#include <string.h>

int main() {
    char supplierName[50], email[50], phone[30], town[50], search[50];
    int supplierNameLength, emailLength, townLength;
    int choice;
    int done= 0;
    while (done == 0){
    printf("\nMUNICIPAL FINANCIAL MANAGEMENT\n");
    printf("\n  Select a task: 1. Add Supplier\n"
           "                            2. Display Supplier\n"
           "                            3. Search Supplier\n"
           "                            4. Show Name Length\n"
           "                            5. Exit");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter supplier name: ");
    fgets(supplierName, sizeof(supplierName), stdin);

    
    printf("Enter supplier email: ");
    fgets(email, sizeof(email), stdin);

    printf("Enter supplier phone: ");
    fgets(phone, sizeof(phone), stdin);

    printf("Enter supplier town: ");
    fgets(town, sizeof(town), stdin);
        break;


    case 2:
        printf("\nSupplier Details:\n");

    printf("Name: %s ", supplierName);
    printf("Email: %s", email);
    printf("Phone: %s", phone);
    printf("Town: %s", town);
        break;
        case 3:

        printf("\nEnter a supplier name to search: ");
    fgets(search , sizeof(search), stdin);

    if (strcmp(supplierName, search) == 0) {
        printf("Supplier found: %s", supplierName);
    } else {
        printf("Supplier not found.\n");
    }
    break;
    case 4:

    supplierNameLength = strlen(supplierName);
    emailLength = strlen(email);
    townLength = strlen(town);

    printf("\nSupplier name length: %d\n", supplierNameLength);
    printf("Supplier email length: %d\n", emailLength);
    printf("Supplier town length: %d\n", townLength);

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