#include<stdio.h>
int main(){

 char fname[30];
 char lname[30];
 int bday;

printf("What is your first name?");
scanf("%s",&fname);

printf("What is your last name?");
scanf("%s",&lname);

printf("What is your birth year?");
scanf("%d",&bday);

printf("%s %s was born in %d\n", fname, lname, bday);




return 0;
}
