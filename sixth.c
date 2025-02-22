#include <stdio.h>
int main (){
    char firstname [20];
    char lastname [20];
    int birthyear;
    printf("what is your firstname?\t",firstname);
    scanf("%s",&firstname);
    printf("what is your lastname?\t",lastname);
    scanf("%s",&lastname);
    printf("what is your birth year?",birthyear);
    scanf ("%d",&birthyear);
    printf ("\n%s %s was born in %d\n" ,firstname,lastname,birthyear);
    return 0;


}
