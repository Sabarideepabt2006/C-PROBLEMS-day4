#include<stdio.h>
int main() {
    int c,u;
    scanf("%d %d",&c,&u);
    switch(c) {
        case 1:
            if (u<=30) {
                printf("%d",u*5);
            }
            else if (u>=30) {
                printf("%d",u*8);
            }
            break;
        case 2:
            printf("%d",u*10);
    }
    return 0;
}