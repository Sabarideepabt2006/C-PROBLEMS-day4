#include <stdio.h>
int main() {
    int vehicleType,trips;
    scanf("%d %d",&vehicleType,&trips);
    switch (vehicleType) {
        case 1:
            if (vehicleType == 1 && trips == 1) {
                printf("Rs.100");
            }
            else if (vehicleType == 1 && (trips>=2 && trips<=10 )) {
                printf("Rs.800");
            }
            else if (vehicleType == 1 && trips>10) {
                printf("Rs.800");
            }
            break;
        case 2:
            if (vehicleType == 2 ) {
                printf("%d",trips*240);
            }
            break;
    }
    return 0;
}