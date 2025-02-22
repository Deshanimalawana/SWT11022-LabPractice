#include <stdio.h>
int main()
{
    char fname[30];
    char lname[30];
    int year;

    printf("What is your firstname? ");
    scanf("%s",fname);
    printf("What is your lastname? ");
    scanf("%s",lname);
    printf("What is your birth year? ");
    scanf("%d",&year);
    printf("%s %s was born in %d",fname,lname,year);


    return 0;


}
