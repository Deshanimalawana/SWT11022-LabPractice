#include<stdio.h>
int main(){

    int no;

    //printf("Enter a number:");

    while(1){

        printf("Enter a number:");
        scanf("%d",&no);

        if(no < 0){
            break;
        }
      printf("You are entered:%d\n",no);

    }

    printf("You are entered negative number exiting program.\n");

    return 0;












}
