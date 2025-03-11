#include<stdio.h>
 int main(){
  int no;
  printf("Enter a number:");
  scanf("%d",&no);
  if(no>0){
  printf("The number is positive.");
  }else if (no<0){
  printf("The number is negative.");
  }else{
  printf("The number is zero.");
  }



 return 0;

 }
