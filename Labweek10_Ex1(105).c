#include <stdio.h>
int main () {

    int marks[5];

    int ages[]={21,21,23,24,25};
    ages [1]=27;

    int students_marks[5];
    printf("Enter marks of 5 students!\n ");
    for (int i=0; i<5; i++){
            printf("student %d: ",i+1);

    scanf("%d",&students_marks[i]);
    }

    printf("\nstored marks: ");
    for (int i=0;i<5;i++){
        printf("%d ",students_marks[i]);
    }
    return 0;


}
