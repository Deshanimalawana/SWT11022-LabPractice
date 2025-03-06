#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Firstname[20];
    char Lastname[20];
    int dob;
    printf("what is your Firstname?");
    scanf ("%s", Firstname);
    printf("What is your last Name?");
    scanf("%s", Lastname);
    printf("What is your Birth year?");
    scanf("%d",&dob);
    printf("%s %s was bron in %d",Firstname,Lastname,dob);
    return 0;
}

