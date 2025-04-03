#include<stdio.h>
int main (){

 int i;

 while(1){
    printf("Enter Number: ");
    scanf("%d",&i);

    if(i<0){
        break;
    }
 }
 printf("You entered negative number");
 return 0;
}
