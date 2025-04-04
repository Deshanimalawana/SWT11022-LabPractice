#include <stdio.h>
int main(){
      int marks[5]={};
      marks[0]= 98;
      printf("%d",marks[0]);

      printf("  output 01\n");

      int age[5] = {21,21,23,24,25};
      age[0] = 27;
      printf("%d",age[0]);

      printf("  output 02\n");

     int student_marks [5];
      printf("enter the marks :");
      for(int i =0; i<5;i++){
            scanf("%d",&student_marks[i]);}

             printf("students marks :");
             for(int i=0; i<5;i++){
             printf("%d  ",student_marks[i]);
      }
return 0;
}







