#include<stdio.h>
int main(){
    //(1)
      int marks[5]={0};

    //(2)
      marks[0] = 98;

    //(3)
      int ages[5] = {21,21,23,24,25};

    //(4)
      ages[1] = 27;

    //(5)
      int student_marks[5];
      for(int i=0;i<5;i++){

        printf("enter mark student%d:",i+1);
        scanf("%d",&student_marks[i]);
      }

    //(6)
     printf("\nStudent mark list\n");
     for (int i =0; i<5;i++){
        printf("student %d:%d\n",i+1,student_marks[1]);
     }
     return 0;



}
