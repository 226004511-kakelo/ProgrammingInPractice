#include <stdio.h>

int main() {

    int done =0;
    char supplierName[50];
    double price;
    double budget;
    int documentsComplete;
    int preferredSupplierID;
    double preferredSupplierprice;
    int registered;
    int supplierID;

    printf("Enter available budget: ");
        scanf("%lf", &budget);
     
    preferredSupplierprice = budget; 
    while (done == 0){

        printf("Enter supplier name: ");
        scanf("%49s", supplierName);

        printf("Enter supplier ID: ");
        scanf("%d", &supplierID);

        printf("Enter tender price: ");
        scanf("%lf", &price);

        
        printf("Is supplier registered? (1=Yes, 0=No): ");
        scanf("%d", &registered);

        printf("Are all documents complete? (1=Yes, 0=No): ");
        scanf("%d", &documentsComplete);


        if (registered == 1 && documentsComplete == 1 && price <= budget)
            {
                printf("\nSupplier: %s\n", supplierName);
                printf("Status: Qualified\n");
                if (price < preferredSupplierprice){
                    preferredSupplierprice = price;
                  preferredSupplierID = supplierID;

                  printf("\nSupplier: %s\n", supplierName);
                printf("Is the Preferred Supplier\n");
                }
            }
            else
                {
                printf("\nSupplier: %s\n", supplierName);
                printf("Status: Disqualified\n");
                }


                printf("Are all your tender evaluations complete? (1=Yes, 0=No): ");
                scanf("%d", &done);
        

    }

    printf("Supplier ID %d Is the preferred supplier", preferredSupplierID);


}