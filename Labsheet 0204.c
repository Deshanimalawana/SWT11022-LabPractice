#include<stdio.h>
int main (){
    char fname[50];
    char lname[50];
    int birthyear;

    printf("What is your Frist Name?");
    scanf("%s",&fname);

    printf("what is your Last Name?");
    scanf("%s",&lname);

    printf("what is your Birth Year:");
    scanf("%d", &birthyear);

    printf("%s %s was born in %d\n",fname,lname, birthyear);

    return 0;

}
