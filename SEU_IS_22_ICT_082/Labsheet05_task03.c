#include<stdio.h>

int main( ) {
   int age;
    printf("Enter age:");
    scanf("%d",&age);

    if(age>18){
     printf("Eligible to vote");
    }else {if (age<18)
     printf("Not eligible to vote");

    }
        return 0;
    }



















