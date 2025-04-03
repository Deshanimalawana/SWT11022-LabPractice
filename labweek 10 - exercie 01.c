#include <stdio.h>
int main() {

    int marks[5] = {0};
    marks[0] = 98;
    int ages[] = {21,27,23,24,25};
    ages[1] = 27;

    int student_marks[5];
    for (int i = 0; i < 5; i ++){
        printf("enter marks: %d: ",i+1);
        scanf("%d",&student_marks[i]);
    }

    printf("student marks = ");

    for(int i = 0; i < 5; i++){
        printf("%d, ", student_marks[i]);
    }

    return 0;


}
