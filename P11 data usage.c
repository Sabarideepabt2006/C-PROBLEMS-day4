#include<stdio.h>
int main() {
    int planType;
    float dataUsed;
    scanf("%d",&planType);
    scanf("%f",&dataUsed);
    switch(planType) {
        case 1:
            if (planType == 1 && dataUsed >1) {
                printf("%.2f Speed Reduced",dataUsed);
            }
            else {
                printf("Normal Speed");
            }
            break;
        case 2:
            if (planType==2 && dataUsed >2) {
                printf("%.2f Extra Charges Applied",dataUsed);
            }
            else if (planType==2 && dataUsed <2) {
                printf("Normal Speed");
            }
            break;
    }
    return 0;

}