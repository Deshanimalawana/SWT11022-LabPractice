#include <stdio.h>
int main(){
     char firstname[20];
     char lastname[20];
     int birthyear[10];

     printf("What is your firstname?: ");
     scanf("%s", &firstname);
     printf("What is your lastname?: ");
     scanf("%s", &lastname);
     printf("What is your birthyear?: ");
     scanf("%d", &birthyear);

       printf( "%s %s was born in %d\n ", firstname, lastname, birthyear);


}
