#include <stdio.h>
int main(){

    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    if(age>=18){
        printf("\nEligible to vote\n");
    }
    else{
        printf("\nNot eligible to vote\n");
    }

return 0;
}
