#include <stdio.h>
int main(){
     char fname[100];
     char lname [100];
     int year;

     printf("What is your first name?");
     scanf("%s",fname);
     printf("What is your last name?");
     scanf("%s",lname);
     printf("What is your birth year?");
     scanf("%d",&year);

     printf("%s %s was born in %d",fname,lname,year);
     return 0;
}
