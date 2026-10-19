#include <stdio.h>
#include <string.h>
     float vat;
    float amount; 

float calculateVAT(float amount){
    vat = amount*0.15;
    return vat;
}

int employeeIDs[5] = {101, 102, 103, 104, 105};
int id ; 
int searchEmployee(int id, int employeeIDs[]){
   for (int i =0; i <5; i++){
        if (id == employeeIDs[i]){
            return i;
        }

   }
   return -1;
}


 float basic,housing, transport, gross;

float calculateSalary(float basic, float housing, float transport){

    gross = basic + transport + housing;
}


    
  char supplierName[50], email[50], phone[30], town[50], search[50];
    int supplierNameLength, emailLength, townLength;
    float result, revenue , expenses;
void displayMenue(){
         printf("\nMUNICIPAL MANAGEMENT SYSTEM\n");
    printf("\n  Select a task:          1. Budget Management \n"
           "                            2. Supplier Management\n"
           "                            3. Employee Management\n"
       
           "                            4. Exit    ");
}




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

float calculateBudget(float revenue, float expenses){

    result = revenue -  expenses;
    if (result >0 ){
        printf("\nSURPLUS of N$%.2f\n", result);

    } else if (result<0)
    {
       printf("\nDEFICIT of N$ %.2f\n", result);
    } else{
        printf("\nBALANCED\n");
    }
    
    return result;
}




int budgetManagement(){
     int choice;
    int done= 0;
    while (done == 0){
    printf("\nMUNICIPAL BUDGET MANAGEMENT\n");
    printf("\n  Select a task:          1. Calculate Budget\n"
           "                            2. Exit    ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
       printf("\n Enter the revenue :  ");
    scanf("%f", &revenue);

    
    printf("\n Enter the expenses :  ");
    scanf("%f", &expenses);



    calculateBudget(revenue ,expenses);
  
        break;

    case 2:
        done =1;
        
     
       
    break;

    
    default:
    printf("invalid option entered");
        break;
    }
}
   
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


    
int employeeManagment(){
     int choice;
    int done= 0;
    while (done == 0){
    printf("\nMUNICIPAL EMPLOYEE MANAGEMENT\n");
    printf("\n  Select a task:          1. Calculate VAT\n"
           "                            2. Calculate Salary\n"
           "                            3. Search Salray   \n"
           "                            2. Exit    \n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
         printf("\n Enter the amount to be taxed:  ");
    scanf("%f", &amount);
    calculateVAT(amount);
    printf("\nVat is : %.2f\n", vat);

  
        break;

    case 2:
      printf("\n Enter the Basic salary:  ");
    scanf("%f", &basic);

    
    printf("\n Enter the Housing allowance:  ");
    scanf("%f", &housing);

    
    printf("\n Enter the Transport allowance:  ");
    scanf("%f", &transport);


    calculateSalary(basic,housing ,transport);
    printf("\nGross Salary is : %.2f\n", gross);

        
     
       
    break;
        case 3:
        printf("\nEnter id of employee to be searched:  ");
    scanf("%d", &id);
    
    printf("The employee was found at %d", searchEmployee( id,  employeeIDs) );
        break;

        case 4:
        done = 1;

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

     displayMenue();

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        budgetManagement();
        break;

    case 2:
        supplierManagement();
        break;
        case 3:
     
       employeeManagment();
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