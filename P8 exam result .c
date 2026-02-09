#include<stdio.h>
int main() {
    int marks,attendance;
    printf("Enter your marks:");
    scanf("%d",&marks);
    printf("Enter attendance:");
    scanf("%d",&attendance);
    if (attendance>=75) {
        if (marks>=75 && marks<=100) {
            printf("Distinction");
        }
        else if (marks>50 && marks<=74) {
            printf("Pass");
        }
        else {
            printf("Fail");
        }
    }
    else {
        printf("Failure");

    }
    return 0;
}