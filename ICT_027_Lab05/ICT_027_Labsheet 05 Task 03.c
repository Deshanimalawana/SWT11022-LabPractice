#include<stdio.h>
    int main()

{
    int age;
    printf("Enter Your Age:");
    scanf("%d",&age);
    if (age>=18){
            printf("Eligible to vote");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}
