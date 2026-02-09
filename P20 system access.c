#include <stdio.h>
int main() {
    int r,l;
    scanf("%d %d",&r,&l);
    switch(r) {
        case 1:
            if (l>=9 && l<=18) {
                printf("Limited Access");
            }
            else {
                printf("Access Denied");
            }break;
        case 2:
            printf("Full access anytime");
    }
    return 0;
}