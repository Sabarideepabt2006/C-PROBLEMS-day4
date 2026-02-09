#include <stdio.h>
int main () {
    int loanType,creditScore;
    scanf("%d %d",&loanType,&creditScore);
    switch (loanType) {
        case 1:
            if (loanType == 1 && creditScore >=700) {
                printf("Approved");
            }
            else {
                printf("Manual Review");
            }
            break;
        case 2:
            if (loanType == 2 && creditScore >=700) {
                printf("Approved");
            }
            else {
                printf("Rejected");
            }
            break;
    }
    return 0;
}