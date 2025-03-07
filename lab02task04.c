#include <stdio.h>
int main(){
    char firstname[30],lastname [30];
    int birthyear;
printf("what is your first name?");
scanf("%s",firstname);
printf("what is your last name?");
scanf("%s",lastname);
printf("what is you birth year?");
scanf("%d",&birthyear);
printf("%s %s was born in %d",firstname,lastname,birthyear);
return 0;
}
