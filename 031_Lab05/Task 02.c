#include<stdio.h>

int main() {
    int marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);

    if(marks < 50) {
        printf("Fail");
    } else if (marks < 75) {
        printf("Good");
    } else if (marks < 90){
        printf("Very Good");
    } else {
        printf("Excellent");
    }

}
