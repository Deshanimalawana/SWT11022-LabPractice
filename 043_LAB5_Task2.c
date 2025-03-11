#include <stdio.h>
int main(){
    int marks;
    printf("Enter marks:");
    scanf("%d", &marks);
    if (marks>90)
    {
        printf("Exalante");
    }else if (marks>89)
    {
        printf("Very Good");
    }else if (marks>74)
    {
        printf("Good");
    }else
    {
        printf("Fail");
    }
    return 0;
}
