#include<stdio.h>

int main(){
    int input;

    while(1){
        printf("Enter a Number: ");
        scanf("%d",&input);

        if(input < 0){
            printf("You entered Negative number: %d\n",input);
            break;
        }
    }
    return 0;
}
