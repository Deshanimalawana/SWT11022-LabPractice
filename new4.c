#include<stdio.h>
int main (){
    char first_name [20];
    char last_name [20];
    int birthyear;
    printf("What is your first name :");
    scanf("%s",&first_name);
    printf("What is your last name :");
    scanf("%s",&last_name);
    printf("What is your Birth year :");
    scanf("%d",& birthyear);

    printf("\n %S %S Was born in %d \n",first_name, last_name, birthyear);
    return 0;


}
