#include <stdio.h>
int  main(){
    char firstName[50],lastName[50];
    int birthyear;

    printf("what  is  your  first  name?");
    scanf("%s",firstName);
    printf("what  is  your  last  name?");
    scanf("%s",lastName);
    printf("what  is  your  birthyear?");
    scanf("%d",&birthyear);

    printf("%s %s was  born  in %d\n",firstName,lastName,birthyear);
    return 0;
}