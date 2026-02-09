
#include <stdio.h>
int main() {
    int course;
    char category;
    scanf("%d %c", &course, &category);
    if (course == 1 && category == 'R') {
        printf("Rs.5000");
    }
    else if (course == 1 && category == 'S') {
        printf("Rs.3000");
    }
    else if (course == 2 && category == 'R') {
        printf("Rs.9000");
    }
    else if (course == 2 && category == 'S') {
        printf("Rs.7000");
    }
    else {
        printf("Invalid input");
    }
    return 0;
}
