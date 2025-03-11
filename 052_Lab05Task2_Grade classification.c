#include <stdio.h>

int main()
{
  int Marks;
  printf("Enter your Marks :");
  scanf("%d",&Marks);
  if(Marks>=90){
    printf("Grade : Excellent");
  }else if(Marks<=89&&Marks>=75){
    printf("Grade : Very Good");
  }else if (Marks<=74 && Marks>=50){
    printf("Grade : Good");
  }else {
    printf("Grade : Fail");
  }
  return 0;
}
