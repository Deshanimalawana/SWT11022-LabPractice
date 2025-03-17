#include <stdio.h>

int main(void){
    int age;
    printf("Enter Age : ");
    scanf("%d", &age);

    if (age >= 18){
        printf("Eligible to vote\n");
    }
    else{
        printf("Not eligible to vote\n");
    }

    return 0;
}