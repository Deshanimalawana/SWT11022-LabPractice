#include<stdio.h>
int main(){
 int marks[5];
 marks[0]=98;

 int ages[5] = {21,21,23,24,25};

 ages[1]=27;
 int students_marks[5];
 printf("Enter marks for 5 student:\n");
    for (int x = 0;x < 5;x ++){
        printf("Student %d marks:",x + 1);
        scanf("%d",&students_marks[x]);
    }
 printf("\n The marks entered for the 5 students are:\n");
     for (int x = 0;x < 5;x ++){
        printf("student %d marks:%d\n",x+1,students_marks[x]);
     }
return 0;

}
