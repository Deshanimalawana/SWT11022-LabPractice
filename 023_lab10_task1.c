#include <stdio.h>
#include <stdlib.h>

int main()
{  float marks[5];
    marks[0]=98;
    int age[]={21,21,23,24,25};
    age[1]=27;
    float student_marks[5];

    printf("Enter 5 marks:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &student_marks[i]);
    }
     printf("enterd marks are=");
    for (int i = 0; i < 5; i++) {
        printf("%.2f,", student_marks[i]);
    }

    return 0;
}
