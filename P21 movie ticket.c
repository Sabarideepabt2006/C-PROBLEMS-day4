#include <stdio.h>
int main() {
    int seat,show;
    scanf("%d %d",&seat,&show);
    switch(seat) {
        case 1:
            if (show>=18) {
                printf("ticket price:%d",seat*150+50);
            }
            else {
                printf("ticket price:%d",seat*150);
            }
            break;
        case 2:
            if (show>=18) {
                printf("ticket price:%d",seat*250+50);
            }
            else {
                printf("ticket price:%d",250);
            }
            break;
    }
    return 0;
}