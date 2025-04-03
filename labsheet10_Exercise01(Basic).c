#include <stdio.h>

int main(){
    int marks[5];
    marks[0]=98;
    int age[5]={21,21,23,24,25};
    age[1]=27;

    int students_marks[5];
    printf("Enter student Marks:\n");


    for(int i=0;i<5;i++){
        scanf("%d",&students_marks[i]);
    }

     for(int i=0;i<5;i++){
         printf("Student's %d marks is %d\n",i+1,students_marks[i]);
    }

return 0;
}

