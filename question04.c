#include<stdio.h>
    int main(){
        char firstname,lastname;
        int birthyear;

        printf("What is your first name?");
        scanf("%s", &firstname);
        printf("What is your last name?");
        scanf("%s", &lastname);
        printf("What is your birth year?");
        scanf("%d", &birthyear);

        printf("\n%s %s was born in %d\n",firstname,lastname,birthyear);
        return 0;
        }
