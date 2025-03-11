#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);

    if (marks>=50){
        printf("You passed the exam");
    }
    else {
        printf("You failed in exam");
    }
    return 0;
}
