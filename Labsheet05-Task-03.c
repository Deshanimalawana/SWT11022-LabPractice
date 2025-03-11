#include <stdio.h>
int main () {
    int age;

    printf("Enter age: ");
    scanf("%d",&age);

    if(age >= 18) {
        printf("age :Eligible to vote\n");
    } else if (age <= 18) {
        printf("age : Not eligible to vote\n");

    }




}
