#include <stdio.h>
int main (){

  int age;
  float income;

  printf("Enter your age,income:");
  scanf("%d %f",&age,&income);

  if (age>=60){
     if (income<=60000.0){
        printf("you are eligible for tax deduction\n");
     }else{
      printf("you are not eligible for tax deduction\n");
     }
    }else{
    printf("you are eligible for tax deduction\n");
    }

return 0;

}
