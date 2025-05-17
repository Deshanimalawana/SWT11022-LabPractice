#include <stdio.h>
#include <stdlib.h>

int main()
{
    // first question
    int marks[] = {85,59,40,92,65};
    marks[0]=95;
    //second question
    int ages[] = {21,21,23,24,25};
    ages[1]=27;
    //Third quesiotn
    int Students_marks[5];
    printf("Enter the student marks:");

    //final one
    int i;
    for (i=0;i<5;i++){
        scanf("%d",&Students_marks[i]);
        printf("The student mark is: %d\n", Students_marks[i]);
    }

    return 0;
}
