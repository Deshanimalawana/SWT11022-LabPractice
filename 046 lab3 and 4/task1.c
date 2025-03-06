# include <stdio.h>
int main(){
    int studentID;
    float GPA;
    char grade;
    studentID = 12345;
    GPA = 3.75;
    grade = 'A' ;
    printf("studentID: %d\n",studentID);
    studentID = 54321;
    GPA = 3.90;
    grade[0] = 'A';  // First character is 'A'
    grade[1] = '+';  // Second character is '+'
    grade[2] = '\0'; // Null-terminator
    printf("studentID: %d\n",studentID);
    printf("GPA : %2f\n",GPA);
    printf("grade: %c\n",grade);
    return 0;
}
