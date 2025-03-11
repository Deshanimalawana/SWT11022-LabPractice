#include <stdio.h>
int main (){
    int age;
    printf ("enter your age: ");
    scanf ("%d",&age);

    if (age >= 18){
        printf("your are Eligible to vote");
    }else{
        printf ("your are not Eligible to vote");
    }
    return 0;
}
