#include<stdio.h>
  int main(){
  int num1;
  int num2;
  int num3;
  printf("Enter three numbers:");
  scanf("%d%d%d",&num1,&num2,&num3);
  if(num1>=num2 & num1>=num3){
    printf("The largest number is %d",num1);
  }else if (num2>=num3){
  printf("The largest number is: %d",num2);
  }else{
  printf("The largest number is %d",num3);
  }

  return 0;
  }
