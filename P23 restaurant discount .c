#include <stdio.h>
int main() {
    int c, b;
    int pay;
    scanf("%d %d", &c, &b);
    switch (c) {
        case 1:
            pay = b - (b * 0.05);
            break;
        case 2:
            pay = b - (b* 0.15);
            break;
        default:
            printf("Invalid customer type");
            return 0;
    }

    printf("Pay=%d", pay);
    return 0;
}

