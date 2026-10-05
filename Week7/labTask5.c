#include <stdio.h>
#include <string.h>

int main() {
    char supplierName[50], email[50], phone[30], town[50], search[50], backup[50],summary[200];
    int supplierNameLength, emailLength, townLength;

    printf("Enter supplier name: ");
    fgets(supplierName, sizeof(supplierName), stdin);

    
    printf("Enter supplier email: ");
    fgets(email, sizeof(email), stdin);

    printf("Enter supplier phone: ");
    fgets(phone, sizeof(phone), stdin);

    printf("Enter supplier town: ");
    fgets(town, sizeof(town), stdin);

    printf("\nSupplier Details:\n");

    printf("Name: %s ", supplierName);
    printf("Email: %s", email);
    printf("Phone: %s", phone);
    printf("Town: %s", town);

    supplierNameLength = strlen(supplierName);
    emailLength = strlen(email);
    townLength = strlen(town);

    printf("\nSupplier name length: %d\n", supplierNameLength);
    printf("Supplier email length: %d\n", emailLength);
    printf("Supplier town length: %d\n", townLength);

    printf("\nEnter a supplier name to search: ");
    fgets(search , sizeof(search), stdin);

    if (strcmp(supplierName, search) == 0) {
        printf("Supplier found: %s", supplierName);
    } else {
        printf("Supplier not found.\n");
    }

    strcpy(backup, supplierName);
    printf("Backup of supplier name: %s", backup);
     printf("Original supplier name: %s", supplierName);


     printf("\nSupplier summary:");
     strcpy(summary, supplierName);
     strcat(summary, " operates in ");
     strcat(summary, town);
     printf("%s", summary);
    return 0;
}