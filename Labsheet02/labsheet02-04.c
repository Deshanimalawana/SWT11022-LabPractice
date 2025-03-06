#include <stdio.h>
int main(){
    char f_name[50], l_name[50];
    int birth_year;
    printf("What is your firstname?");
    scanf("%s",&f_name);
    printf("What is your lastname?");
    scanf("%s", &l_name);
    printf("What is your birth year?");
    scanf("%d", &birth_year);
    printf("%s %s was born in %d",f_name, l_name, birth_year);
return 0;
}
