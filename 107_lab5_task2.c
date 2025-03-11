#include<stdio.h>
int main(){
    int mark;
    printf("Enter your mark : ");
    scanf("%d",&mark);
    if(mark<50)
    {
        printf("Grade: Fail");
    }
    else if(mark<=74)
    {
        printf("Grade: Good");
    }
     else if(mark<=89)
    {
        printf("Grade: Very Good");
    }
    else
    {
        printf("Grade: Excellent");
    }
return 0;
}
