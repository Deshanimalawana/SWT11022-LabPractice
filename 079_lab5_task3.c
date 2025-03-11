#include<stdio.h>
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age>=18){
        printf("Eligible to vote.");
    }else{
    printf("Not elegible to vote.");}

    return 0;
}
