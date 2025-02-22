#include <stdio.h>
int main()  {

    char firstname[40],lastname[40];
    int birthyear;
    printf("what's your first name: ");
    scanf("%s",&firstname);
    printf("what's your first name: ");
    scanf("%s",&lastname);
    printf("what's your birth year: ");
    scanf("%d",&birthyear);
    printf("%s %s was born in year:%d\n",firstname,lastname,birthyear);
    return 0;

}