#include <stdio.h>
int main(){
 int age;
 int income;
 age =55;
 income =50000;

  if (age >= 60) {
    if (income < 60000){
        printf ("you are eligible for a tax deduction.\n");
       }else {
    printf("you are not eligible for a tax deduction.\n");
  }
}else{
    printf("you are not eligible for a tax deduction.\n");
  }

     return 0;
}
