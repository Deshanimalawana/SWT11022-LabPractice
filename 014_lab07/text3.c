#include <stdio.h>
int main(){
    int input;

    do {
        printf("Enter a positive Number :");
        scanf("%d",&input);
    }while(input <= 0);

    printf("You Enter a positive Number %d \n",input);
    return 0;

}
