#include <stdio.h>
#include <stdlib.h>
    void name1();

int main()
{
    name1();
    return 0;
}
    void name1(){
    char name[50];
    printf("Enter your name:");
    scanf("%s",name);
    printf("Hello, %s! Welcome to the lab\n",name);

    }
