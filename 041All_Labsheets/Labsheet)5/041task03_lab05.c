#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your Age:");
    scanf("%d",&age);

    if (age>18){
        printf("You eligible for vote.");
    }
    else{
        printf("You not eligible for vote.");
    }
    return 0;
}
