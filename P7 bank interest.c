#include<stdio.h>
int main() {
    int accountType;
    int year;
    printf("Enter your account type:");
    scanf("%d",&accountType);
    printf("Enter your year:");
    scanf("%d",&year);
    switch (accountType) {
        case 1:
            if (accountType == 1 && year<=3) {
                printf("Interest 4 percent");
            }
            else {
                printf("Interest");
            }
        case 2:
            if (accountType == 2 && year<=3) {
                printf("Interest 5 percent");
            }
            else {
                printf("Interest 7 percent");
            }
    }
    return 0;
}