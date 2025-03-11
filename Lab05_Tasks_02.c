#include <stdio.h>
int main (){
    int marks;
    printf ("Enter the marks: ");
    scanf ("%d",&marks);

    if (marks >= 90){
        printf ("Excellent\n");
    }else if (marks >= 75 && marks <= 89){
        printf ("Very good\n");
    }else if (marks >= 50 && marks <= 75 ){
        printf ("Good\n");
    }else{
        printf ("Fail");
    }
    return 0;
}
