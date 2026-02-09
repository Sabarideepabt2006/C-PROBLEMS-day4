#include <stdio.h>
int main() {
    int accountType,balance,withdrawalAmount;
    printf("Please enter the account type:");
    scanf("%d",&accountType);
    printf("Please enter the amount to be withdrawal:");
    scanf("%d",&withdrawalAmount);
    printf("Enter the balance amount:");
    scanf("%d",&balance);
    switch (accountType) {
        case 1:
            if (withdrawalAmount >= balance) {
                printf("Transaction rejected");
            }
            else {
                printf("Transaction Successfull");
            }
            break;
        case 2:
            if (withdrawalAmount >= 5000) {
                printf("Limit Exceeded");
            }
            else {
                printf("Limit Not Exceeded");
            }

    }
    return 0;
}