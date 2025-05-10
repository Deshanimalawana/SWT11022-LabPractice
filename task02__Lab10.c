#include <stdio.h>

 int main(){
     int subject_marks[6] = {0,0,0,0,0,0};

     int avarage;

     printf("Enter 6 subject marks");
      for(int i = 0; i < 6; i++){
        scanf("%d" ,&subject_marks[i]);
      }

     avarage = (subject_marks[0]+subject_marks[1]+subject_marks[2]+subject_marks[3]+subject_marks[4]) / 6;

     printf("Users marks: %d\n");
     for(int i = 0; i < 6; i++){
        printf("%d\n", subject_marks[i]);

       }
     printf("Avarage of user marks: %d\n ", avarage);



 }
