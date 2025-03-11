#include <stdio.h>
int main () {

    int marks ;
    printf("Enter marks: ");
    scanf("%d,&marks");
    if(marks >=90){
        printf("Excellent\n");
    }
    else if(marks >= 75){
        printf("Very Good\n");
    }
    else if(marks >= 50){
        printf("Good\n");
    }
    else{
        printf("Fail\n");
    }
    return 0;
}
