#include <stdio.h>
int main()
{
    char fname[20],lname[20];
    int birth;

    printf("What is your firstname?");
    scanf("%s", fname);
    printf("What is your lastname?");
    scanf("%s", lname);
    printf("What is your birth year?");
    scanf("%d",&birth);
    printf("%s %s was born in %d\n",fname,lname,birth);
    return 0;
}

