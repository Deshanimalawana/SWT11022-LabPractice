#include <stdio.h>
int main(){
    int studentID;
    float GPA;
    char grade;
    char plus;

    studentID = 12345;
    GPA = 3.75;
    grade = 'A';

    printf("Your student ID is: %d\n", studentID);
    printf("Your GPA is: %.2f\n", GPA);
    printf("Your Grade is: %c\n", grade);

    studentID = 54321;
    GPA = 3.90;
    grade = 'A';
    plus = '+';

    printf("Updated student ID is: %d\n", studentID);
    printf("Updated GPA is: %.2f\n", GPA);
    printf("Updated grade is: %c%c\n", grade, plus);

return 0;
}


