#include<stdio.h>
int main (){
    char f_name[10];
    char l_name[10];
    int boy;

    printf("What is your firstname ?");
    scanf("%s",&f_name);

    printf("What is your lastname?");
    scanf("%s",&l_name);

    printf("What is your birth year?");
    scanf("%d",&boy);

    printf("%s %s was born in%d\n", f_name , l_name , boy);

    return 0;
}
