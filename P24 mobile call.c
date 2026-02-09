#include <stdio.h>
int main() {
    int c, m;
    int charges = 0;
    scanf("%d %d", &c, &m);
    switch(c) {
        case 1:
            charges = m * 1;
            break;
        case 2:
            charges = m* 3;
            break;
        case 3:
            charges = m * 10;
            break;
        default:
            printf("Invalid");
            return 0;
    }

    printf("Charges:%d",m);
    return 0;
}
