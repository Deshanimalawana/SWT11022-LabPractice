#include<stdio.h>
int main() {
    int marks;
    printf("Enter you marks:\n")
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Excellent: %d\n", marks);
    } else if (marks >= 75) {
        printf("Very good: %d\n", marks);
    } else if (marks >= 50) {
        printf("Good: %d\n", marks);
    } else {
        printf("Fail: %d\n", marks);
    }

    return 0;
}
