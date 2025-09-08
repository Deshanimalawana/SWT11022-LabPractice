#include<stdio.h>
int main()
{
    int marks[5];
    marks[0]=98;
    int age[5]={21,21,23,24,25};
    age[1]=27;

    int student_marks[5];

    printf("Enter the marks:\n");


    for(int i; i<5; i++){
        scanf("%d",&student_marks[i]);

    }
    printf("enter marks:\n");
    for (int i=0; i<5; i++){
        printf("%d\n",student_marks[i]);
    }



    return 0;
}
