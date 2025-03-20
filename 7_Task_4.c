#include<stdio.h>

int main(){
    int input;

   do {
        printf("enter a negative number:");
        scanf("%d", &input);
    }while(input>=0);

    printf("you entered a negative number: %d\n" ,input);

    return 0;


}
