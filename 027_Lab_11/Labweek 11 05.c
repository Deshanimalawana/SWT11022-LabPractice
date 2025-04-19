#include<stdio.h>

int main(){

    float marks[2][5];

    for (int student = 0;student < 2;student++){
        printf("Enter marks for student (5 subjects):\n",student);
        for (int subject = 0;subject < 5;subject ++){
           scanf("%f",&marks[student][subject]);
        }
    }
    for (int student = 0;student < 2;student++){
        printf("\nMarks for student:\n",student+1);
        for (int subject = 0;subject < 5;subject++){
            printf("Subject %d: %.2f\n", subject+1,marks[student][subject]);
        }
    }
    return 0;

}
