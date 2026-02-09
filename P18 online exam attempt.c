#include <stdio.h>
int main() {
    int a,m;
    scanf("%d %d",&a,&m);
    switch (a) {
        case 1:
            if (a==1 && m>=80) {
                printf("Excellent");
            }
            else {
                printf("Not Qualified");
            }
            break;
        case 2:
            if (a==2 && m>=60) {
                printf("good");
            }
            else {
                printf("Not Qualified");
            }
            break;
        case 3:
            if (a==3) {
                printf("Needs improvement");
            }
            break;
    }
    return 0;
}