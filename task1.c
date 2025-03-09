#include<stdio.h>
int main(){

    int  studentid =12345;
    float GPA =3.75;
    char grade[3];
    grade[0] ='A';
    grade[1] ='\0';

 printf("studentID:%d\n GPA:%.2f\n grade:%s\n" , studentid, GPA , grade);

 printf("\n updates values\n");
    studentid =54321;
    GPA =3.90;
    grade[0] ='A';
    grade[1]='+';
    grade[2]='\0';

 printf("studentID:%d\n GPA:%.2f\n grade:%s\n" , studentid, GPA , grade);


 return 0;
}
