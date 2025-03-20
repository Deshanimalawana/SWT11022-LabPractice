#include <stdio.h>
int main(){

    int input;

    do{
            printf("Enter a natural number: ");
            scanf("%d",&input);
    }while(input<=0);

    printf("You entered a natural number: %d\n",input);

    return 0;

}

