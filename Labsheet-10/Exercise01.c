#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks [5];
     marks[0] = 98;

    int ages[5] = {21,21,23,24,25};
    ages[1]=27;

    int students_marks[5];
    printf("Enter marks for 5 students : \n");

    for (int i =0;i<5;i++){
        printf("Student %d:",i+1);
        scanf("%d",&students_marks[i]);
    }

    printf("\n students marks:");
    for(int i = 0;i<5;i++){
        printf("%d\n",students_marks[i]);
    }
    return 0;
}
