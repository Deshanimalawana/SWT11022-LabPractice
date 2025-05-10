#include <stdio.h>

int main(){
    int marks[5];
    marks[1] = 98;

    int ages[5] = {21, 21, 23, 24, 25};

    ages[2] = 27;

    int student_marks[5];

    for(int i = 0; i < 5; i++){
        printf("enter %d student marks : ", i+1);
        scanf("%d", &student_marks[i]);
    }
    printf("student marks = ");

    for(int i = 0; i < 5; i++){
        printf("%d ,", student_marks[i]);
    }

    return 0;
}
