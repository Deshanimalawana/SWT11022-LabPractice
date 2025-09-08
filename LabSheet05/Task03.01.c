#include<stdio.h>
int main(){
    int age;

    printf("Enter Age:");
    scanf("%d",&age);

    if ( age <= 18 ){
        printf("Not Eligible to Vote");
    }
    else {
        printf("Eligible to vote");
    }
    return 0;
}
