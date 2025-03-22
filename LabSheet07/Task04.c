#include<stdio.h>

int main (){
    int Number;

    while(1){
        printf("Enter Number : ");
        scanf("%d",&Number);

        if (Number < 0) {
            printf("Negative Number Entered.\n");
            break;
        }

    }
    printf("Program Ended.\n");
    return 0;
}
