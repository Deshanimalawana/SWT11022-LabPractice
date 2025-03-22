#include<stdio.h>
int main(){
    int number;
    while(1){
        printf("Enter a number: ");
        scanf("%d", &number);
        if(number < 0) {
            break;
        }
    }
    printf("You enterd a negative number.Exit ing the loop..\n");
    return 0;
}
