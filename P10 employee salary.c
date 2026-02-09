#include<stdio.h>
int main () {
    int code;
    int experience;
    scanf("%d %d",&code,&experience);
    switch (code) {
        case 1:
            if (code==1 && experience>=3) {
                printf("TotalSalary=%d",50000+experience*5000);
            }
        case 2:
            if (code==2 && experience>=3) {
                printf("TotalSalary=%d",35000+experience*5000);
            }
    }
    return 0;

}