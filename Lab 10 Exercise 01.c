#include<stdio.h>
int main (){
    int marks[5];
    marks [0]= 98;

    int ages[]= {21,21,23,24,25};
    ages[1]=27;

    int students_marks[5];
    for (int i=0; i<5; i++){
    printf("Enter marks of students %d:",i+1);
    scanf("%d",&students_marks[i]);

    }

    printf("Entered marks: \n");
    for (int i =0; i<5; i++){

        printf("Student%d:%d\n",i+1,students_marks[i]);
    }

    return 0;




}
