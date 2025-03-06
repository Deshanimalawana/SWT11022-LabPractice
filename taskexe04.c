#include <stdio.h>
int main(){
   char firstname [20];
   char lastname [20];
   int birthyear;
   printf("what is your firstname?: ");
   scanf("%s",firstname);
   printf("what is your lastname?: ");
   scanf("%s",lastname);
   printf("what is your birthyear?: ");
   scanf("%d",&birthyear);
   printf("%s %s was born in %d",firstname,lastname,birthyear);
   return 0;
}
