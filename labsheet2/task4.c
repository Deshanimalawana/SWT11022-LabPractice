#include<stdio.h>
int main(){
    char firstname[50],lastname[50];
    int birthyear;
    printf("What is your firstname?");
    scanf("%s", firstname);
    printf("What is your lasttname?");
    scanf("%s", lastname);
    printf("What is your birth year?");
    scanf("%d",  &birthyear);
    printf("%s %s was born in %d\n",firstname,lastname,birthyear);
    return 0;


}
