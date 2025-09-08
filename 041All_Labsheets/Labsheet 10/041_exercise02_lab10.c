#include <stdio.h>
#include <stdlib.h>

int main()
{
    int subject_marks [6];
    float avg, sum;
    int length_array = sizeof(subject_marks)/sizeof(subject_marks[0]);


    printf("Enter the student subject marks: ");
    for (int i = 0; i<length_array ; i++){
        scanf("%d", &subject_marks[i]);
        printf("The student marks are : %d\n", subject_marks[i]);
        sum +=subject_marks[i];

    }
    avg = sum/6;
    printf("The average of student marks: %.2f\n", avg);

    return 0;
}
