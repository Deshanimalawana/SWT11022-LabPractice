#include<stdio.h>

int main(){

    int num;

    while(1){
 printf("enter a number : ");
 scanf("%d",&num);

    if(num<0){
    printf("negative number entered.Exit the loop\n");
        break;
        }


    printf("you entered:%d\n",num);
}
    return 0;
}
