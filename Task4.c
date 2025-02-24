 #include <stdio.h>
#include <stdlib.h>

int main()
{
    char fname[20];
    char lname[20];
    int byear;
    printf("What is your first name? ");
    scanf("%s", fname);
    printf("What is your last name? ");
    scanf("%s", lname);
    printf("What is your born year? ");
    scanf("%d", &byear);
    printf("%s %s was born in %d",fname,lname,byear);
    return 0;

}
