#include<stdio.h>
int main(){
    int age;
    printf("Enter a Age:");
    scanf("%d" ,&age);
    if(age>=18){
        printf("\n Eligible to vote");
    }else{
        printf("\n Not eligible");
    }
    return 0;
}
