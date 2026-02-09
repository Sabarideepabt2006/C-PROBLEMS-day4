#include <stdio.h>
int main() {
    int c, d;
    scanf("%d %d", &c, &d);
    switch (d) {
        case 1:
            if (c <= 30) {
                printf("Eligible");
            } else {
                printf("Not Eligible");
            }
            break;
        case 2:
            if (c <= 30) {
                printf("Eligible");
            } else {
                printf("Not Eligible");
            }
            break;
        default:
            printf("Not Eligible");
    }
    return 0;
}
