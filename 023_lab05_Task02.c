#include <stdio.h>
int main()
{
    int marks;
    printf("Enter Marks:");
    scanf("%d",&marks);
    if (marks>=90){
        printf("Grade:EXELENT\n");
    }
    else if (75 <= marks && marks <= 89){
        printf("Grade:very Good\n");
    }
    else if (50 <= marks && marks <= 74){
        printf("Grade:Good\n");
    }
    else{
        printf("Grade:fail\n");
    }
    return 0;
}
