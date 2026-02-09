#include <stdio.h>
int main() {
    int f;
    int b;
    scanf("%d %d",&f,&b);
    switch (f) {
        case 1:
            if (f==1 && b>=1) {
                printf("Extra baggage charge:%d",b*300);
            }
            break;
        case 2:
            if (f==2 && b<=3) {
                printf("Free");
            }
            else if (f==2 && b>3) {
                printf("Extra baggage charge:%d",(b-3)*300);
            }
            else {
                printf("Invalid input");
            }
            break;
    }
    return 0;
}