#include<stdio.h>
int main(){
    int input;

    do{
        printf("Enter a positive number:");
        scanf("%d",&input);
    } while(input<=0);

    printf("you enterd a positive number: %d\n",input);

    return 0;
}
