#include <stdio.h>
int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade: excellent\n");
    } else if (marks >= 75) {
        printf("Grade: Very Good\n");
    } else if (marks >= 50) {
        printf("Grade: Good\n");
    } else {
        printf("Grade: Fail\n");
    }
    return 0;
}
