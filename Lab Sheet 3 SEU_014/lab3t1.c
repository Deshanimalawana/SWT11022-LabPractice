#include <stdio.h>
int main(){

    int studentID;
    float GPA;
    char grade[]={'A','+'};

    studentID = 12345;
    GPA = 3.75;


    printf("Student ID :%d \n",studentID);
    printf("GPA :%.2f \n",GPA);
    printf("Grade :%c \n",grade[0]);

    studentID = 54321;
    GPA = 3.90;


    printf("Updated Student ID :%d \n",studentID);
    printf("Updated GPA :%.2f \n",GPA);
    printf("Updated Grade :%c %c\n",grade[0],grade[1]);

    return 0;


}
