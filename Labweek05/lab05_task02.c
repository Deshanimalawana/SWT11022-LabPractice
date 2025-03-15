#include <stdio.h>
#include <stdlib.h>


int main()
{
    int Mark;
    printf("Enter Marks: ");
    scanf("%d", &Mark);
    if (Mark>=90){
        printf("You are Excelent");
    }else if(Mark>=75){
        printf("You are Very Good");
        }else if(Mark>=50){
            printf("You are Good");
            }else {
                printf("You are Fail");
                }
    return 0;
}
