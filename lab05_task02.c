#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Marks;
    printf("Enter Marks: ");
    scanf("%d", &Marks);
    if (Marks>=90){
        printf("You are Excelent");
    }else if(Marks>=75){
        printf("You are Very Good");
        }else if(Marks>=50){
            printf("You are Good");
            }else {
                printf("You are Fail");
                }
    return 0;
}
