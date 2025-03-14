#include <stdio.h>
int main (){
    int age;
    printf ("enter your age: ");
    scanf ("%d",&age);

    if (age >= 18)
        {printf("Eligible to vote");}
    else
        {printf ("not Eligible to vote");}
    return 0;
}
