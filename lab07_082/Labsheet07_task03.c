#include<stdio.h>

int main( ){
    int natural;

    do{
        printf("Enter natural no:");
        scanf("%d",&natural);

    }while(natural<=0);
        printf("You entered a natural no:%d\n",natural);
         return 0;
}
