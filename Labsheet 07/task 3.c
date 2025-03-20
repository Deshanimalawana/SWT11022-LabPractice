#include<stdio.h>
    int main(){
        int input;

        do{
            printf("Enter a natural numbers:");
            scanf("%d",&input);
        }while (input <= 10);
        printf("You entered a natural number:%d\n",input);
        return 0;
    }
