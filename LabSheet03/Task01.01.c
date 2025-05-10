#include<stdio.h>
int main (){
    int student = 54321;
    float GPA = 3.90;
    char grade [] = "A+";

    grade [0] = 'A';
    grade [1] = '+';

    printf("Updated student ID:%d,\nUpdated GPA:%.2f,\nupdated Grade:%s",student,GPA,grade);

    return 0;
}
