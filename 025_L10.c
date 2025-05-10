#include <stdio.h>
int main()
{
    int students_marks[5];

    for (int i=0 ; i < 5; i++){
        students_marks[i] = (i+1)*10;
    }

    printf ("Student Marks: ");
    for (int i=0; i< 5; i++){
        printf("%d ", students_marks[i]);
    }
    return 0;
}
