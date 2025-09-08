#include <stdio.h>
int main(){
    int age;

    printf("Enter Your Age:\n");
    scanf("%d", &age);

    if (age>=18){
        printf("Eligible to vote");
    }
    else {
        printf("Not Eligible to vote");
    }
    return 0;
}
