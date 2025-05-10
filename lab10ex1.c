#include <stdio.h>
int main(){
    int marks[5];
    marks[0]=98;
    int age[] = {21,21,23,24,25};
    age[1] =27;
    int students_marks[5];
    printf("enter marks for 5 students:\n");
    for(int i=0; i<5; i++){
        printf("enter marks for student %d:",i+1);
        scanf("%d",&students_marks[i]);
    }
    printf("\n students' marks:\n");
    for (int i=0; i<5; i++){
        printf("student %d: %d\n",i+1,students_marks[i]);
    }
    return 0;
}
