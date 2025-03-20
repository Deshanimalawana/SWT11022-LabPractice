#include<stdio.h>

int main(){
  int age;
  float income=50000.0;
  scanf("%d",&age);

  if (age>=60){
    if (income<60000.0){
        printf("you are eligiblw for a tax deduction.\n");
    }else{
    printf("you are not eligible for a deduction.\n");
    }
  }else {
  printf("you are not eligible for a tax deduction.\n");
  }

  return 0;

}
