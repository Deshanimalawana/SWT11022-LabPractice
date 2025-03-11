#include<stdio.h>

int main(){
  char firstname[50],lastname[50];
  int birth_year;

  printf("whats is your first name?");
   scanf("\n %s",&firstname);
  printf("whats is your last name?");
   scanf("\n %s",&lastname);
  printf("what is your birth year?");
  scanf("\n %d",&birth_year);

  printf("%s %s was born in %d\n", firstname,lastname,birth_year);

  return 0;

}
