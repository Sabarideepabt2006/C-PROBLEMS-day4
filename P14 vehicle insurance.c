#include <stdio.h>
int main() {
    int c,age;
    scanf("%d %d",&c,&age);
    switch (age,c) {
        case 1:
            if (c==1 && age<=5) {
                printf("1500");
            }
            else if (c==1 && age>5) {
                printf("2500");
            }
            break;
        case 2:
            if (c==2 && age<=5) {
                printf("4000");
            }
            else if (c==2 && age>5) {
                printf("6000");
            }
            break;
    }
    return 0;
}