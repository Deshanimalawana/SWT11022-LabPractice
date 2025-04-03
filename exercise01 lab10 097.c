#include<stdio.h>
int main()
{
    int marks[5];
    marks[0]=98;
    int ages[]={21,21,23,24,25};
    ages[1]=27;

    int students_mark[5];
    printf("enter marks of 5 students: \n");
    for (int i = 0 ; i<5;i++){
        scanf("%d",&students_mark[i]);

    }
    printf("entered marks:\n");
    for (int i = 0; i<5; i++){
        printf("%d", students_mark[i]);
    }
    return 0;
}
