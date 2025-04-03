#include <stdio.h>
#include <stdlib.h>

int main()
{
    float student_marks[10];
    float max_value;


    printf("Insert the student marks: ");

    for (int n = 0; n < 10; n++){
            scanf("%f", &student_marks[n]);

    }
    max_value = student_marks[0];
    for (int i= 1; i<10; i++){
        if(student_marks[i]>max_value){
            max_value = student_marks[i];
        }
    }
    printf("The maximum value is: %.2f", max_value);
    return 0;
}
