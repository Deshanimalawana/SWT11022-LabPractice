#include<stdio.h>
int main(){
     int num;
      printf("Enter numbers(enter negative numbers to exit): \n");
      while(1){
        scanf("%d",&num);
    if(num<0){
    break;
    }

    printf("You enter:%d\n",num);
      }
      printf("You enter negative\n");
    return 0;
}

