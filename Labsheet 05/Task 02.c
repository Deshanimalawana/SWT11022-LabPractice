#include <stdio.h>
int main (){
int marks;
    printf("Enter a marks: ");
    scanf("%d",&marks);

    if (marks<=100 && marks>=90) {
        printf ("Excellent");
    }
    else if (marks>=75 && marks<=89){
        printf ("Very Good");
    }
    else if (marks>=50 && marks<=74){
        printf ("Good");
    }
    else if (marks<50){
        printf ("Fail");
    }
    else {
        printf ("Invalid Marks");
    }

    return 0;
}
