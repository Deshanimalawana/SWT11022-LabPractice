#include<stdio.h>
int main(){
  int arr[10];
  int sum=0;
  printf("Enter 10 integers:\n");
  for(int i=0;i<10;i++){
    printf("[%d]is :",i+1);
    scanf("%d",&arr[i]);
    sum+=arr[i];
  }
  int *ptr=sum;
  printf("%d",ptr);
  return 0;
  }
