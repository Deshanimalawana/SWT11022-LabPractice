 #include <stdio.h>
int main(){
     char firstname[40];
     char lastname[40];
     int birthyear;
     char information[60];

     printf("What is your firstname? ");
     scanf("%s",firstname);
     printf("what is your lastname? ");
     scanf("%s",lastname);
     printf("What is your birth year? ");
     scanf("%d",&birthyear);
     printf("%s %s was born in %d\n",firstname,lastname,birthyear);
     return 0;
     }
