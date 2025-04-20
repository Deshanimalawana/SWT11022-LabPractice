#include <stdio.h>

int main(){
    int stu1[5];
    int stu2[5];
    int marks;

    for(int i = 0;i<5;i++){
        printf("Enter the marks for Student 1: ");
        scanf("%d",&marks);
        stu1[i]=marks;
    }
    for(int i = 0;i<5;i++){
        printf("Enter the marks for Student 2: ");
        scanf("%d",&marks);
        stu2[i]=marks;
    }

    for(int i = 0;i<5;i++){
        printf("Student 1 marks: %d \n",stu1[i]);
    }
    for(int i = 0;i<5;i++){
        printf("Student 2 marks: %d \n",stu2[i]);
    }
}
