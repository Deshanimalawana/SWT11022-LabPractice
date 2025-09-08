#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark;
    printf("Enter your marks: ");
    scanf("%d",&mark);

    if (mark>=90){
        printf("Grade:Excellent");
    }
    else if (mark>=75) {
        printf("Grade: Very good");
    }
    else if (mark>=50){
        printf("Grade: Good");
    }
    else {
        printf("Grade: Fail");
    }
    return 0;
}
