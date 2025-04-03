#include<stdio.h>
int main(){
    int marks[5];
    marks[0]=98;

    int ages[5]={21,22,23,24,25};
    ages[1]=27;
    int student_marks[5];

    for (int i=0;i<5;i++){
        printf("enter mark for student%d:",i+1);
        scanf("%d",&student_marks[i]);
}

    for (int i=0; i<5; i++){
    printf("student%d: %d\n",i+1,student_marks[i]);
    }
    return 0;



}
