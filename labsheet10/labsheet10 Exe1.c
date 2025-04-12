#include<stdio.h>
int main(){
int marks[5];
marks[0]=98;
int ages[] = {21,21,23,24,25};
ages[1]=27;
int student_marks[5];
printf("Enter marks of 5  student:\n");
for(int i=0;i<5;i++){

    scanf("%d", &student_marks[i]);
}
 printf("Entered marks:\n");
 for (int i=0; i<5; i++){

    printf("%d\n",student_marks[i]);
 }
 return 0;

}
