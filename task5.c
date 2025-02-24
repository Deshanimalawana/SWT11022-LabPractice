#include <stdio.h>
   int main(){
       char Firstname[30];
       char Lastname[30];
       int birthyear;

       printf("What is your firstname? \n",Firstname);
       scanf("%s" ,&Firstname);
       printf("What is your lastname? \n",Lastname);
       scanf("%s" ,&Lastname);
       printf("what is your birth day? \n",birthyear);
       scanf("%d" ,&birthyear);
       printf("%s %s was born in %d\n",Firstname,Lastname,birthyear);

       return 0;
   }
