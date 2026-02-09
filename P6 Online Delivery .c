#include <stdio.h>
int main () {
    int orderAmount;
    int speedType;
    printf("Enter the orderAmount:");
    scanf("%d",&orderAmount);
    printf("Enter amount of speed type:");
    scanf("%d",&speedType);
    switch (speedType) {
        case 1:
            if (speedType==2 && orderAmount<1000) {
                printf("Rs:%d",100);
            }
            break;
        case 2:
            if (speedType==2 && orderAmount >= 1000) {
                printf("Delivery Free");
            }
    }
    printf("Rs:%d",100);

    return 0;

}