#include<stdio.h>
int main() {
    int v,h;
    scanf("%d %d",&v,&h);
    switch (h) {
        case 1:
            if (v>=1 && v<=24) {
                printf("%d",v*10);
            }
            break;
        case 2:
            if (v>=2 && v<=24) {
                printf("%d",v*20);
            }
            break;
        default:
            printf("Invalid Choice");
    }
    return 0;
}
