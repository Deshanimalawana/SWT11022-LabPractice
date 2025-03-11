#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if (num%2==0){
        printf("This is Even Number.");
    }else{
        printf("This is odd Number");
    }

    return 0;
}
