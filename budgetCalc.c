#include <stdio.h>

int main() {
        double revenue, expenses, balance;
        printf("Enter Total Revenue: ");
        scanf("%lf", &revenue);
        printf("Enter Total Expenses: ");
        scanf("%lf", &expenses);
        balance = revenue - expenses;
        if (revenue > expenses) {
            printf("Surplus of: N$ %.2f\n", balance);
        }else{
            printf("Deficit of: N$ %.2f\n", -balance);
        }
        
}