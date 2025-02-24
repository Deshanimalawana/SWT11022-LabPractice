# include <stdio.h>
int main (){
char firstname[50];
char lastname[60];
int birthyear;
printf("What is your first name?:");
scanf("%s",&firstname);
printf("What is your last name?:");
scanf("%s",&lastname);
printf("What is your birth year?");
scanf("%d",&birthyear);
printf("%s %s was born in %d\n",firstname,lastname,birthyear);
return 0;
}
