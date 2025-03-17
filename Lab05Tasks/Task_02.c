#include <stdio.h>

int main(void){
    int Marks;
    char* Grade;
    printf("Enter Marks : ");
    scanf("%d", &Marks);

    if (Marks >= 90){
        Grade = "Excellent";
    }
    else if(Marks >= 75){
        Grade = "Very Good";
    }
    else if(Marks >= 50){
        Grade = "Good";
    }
    else{
        Grade = "Fail";
    }

    printf("Grade : %s\n", Grade);

    return 0;
}