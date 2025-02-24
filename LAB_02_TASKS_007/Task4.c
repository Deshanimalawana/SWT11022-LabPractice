#include <stdio.h>
int main(){
    char firstname[25],lastname[25];
    int birthyear;
  printf("what is your first name?");
  scanf("%s",firstname);
  printf("what is your last name?");
  scanf("%s",lastname);
  printf("what is your birth year?");
  scanf("%d",&birthyear);
  printf("%s %s was born in %d\n",firstname,lastname,birthyear);
  return 0;
}