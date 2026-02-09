#include<stdio.h>
int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    switch (marks/10) {
        case 1:
            if (marks>=91 && marks<=100) {
                printf("Grade A");
                break;
            }
        case 2:
            if (marks>=81 &&marks<=90) {
                printf("Grade B");
                break;
            }
        case 3:
            if (marks>=71 &&marks<=80) {
                printf("Grade C");
                break;
            }
        case 4:
            if (marks>=61 && marks<=70) {
                printf("Grade D");
                break;
            }
        case 5:
            if (marks>=51 && marks<=60) {
                printf("Grade E");
                break;
            }
        case 6:
            if (marks>=41 && marks<=50) {
                printf("Grade F");
                break;
            }
        case 7:
            if (marks>=31 && marks<=40) {
                printf("Grade Supplementary");
                break;
            }
        case 8:
            if (marks>=0 && marks<=30) {
                printf("Fail");
                break;
            }
    }

    return 0;

}