#include <stdio.h>


int main()
{
    int age;
    printf("Enter age:");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("Eligible to vote",age);
    }
    else{
        printf("Not eligible to vote",age);
    }
    return 0;
}
