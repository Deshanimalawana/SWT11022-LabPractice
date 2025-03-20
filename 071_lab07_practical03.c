#include<stdio.h>

int main() {
    int input;
    do {
        printf("Enter the positive number");
        scanf("%d",&input);
    }while (input<=0);
    {
        printf("You entered positive number:%d\n",input);
        return 0;
    }



}
