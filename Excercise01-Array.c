#include <stdio.h>


int main()
{
    //Declare "marks" store marks of five students here.
    int marks[5];
    // Change the First student marks 98.
        marks[0]=98;
        //Declare Student_Ages then Initialize 5 student's age.
    int Students_ages[5]={21,21,23,24,25};
        //change the second student age 27.
       Students_ages[1]=27;
        /*Declare Student_Marks 5. & Get marks from user Input. So, we want to use the for loop*/
    int student_marks[5];
    printf("Enter Students marks here:\n");
    int x;
    for(x=0; x<5; ++x) {
        scanf("%d",&student_marks[x]);
    }
    /*Disply the elements within the Students_marks*/
    printf("Five Students marks:\n");
    for (int x=0; x<5; ++x) {
        printf("%d\n",student_marks[x]);
    }

    return 0;
}
