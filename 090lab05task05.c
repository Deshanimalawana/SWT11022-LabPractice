#include <stdio.h>
int main(){

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num >0){
        printf("\nThe number is Positive.\n");
    }
        else if(num <0){
            printf("\nThe number is Negative.\n");
        }
    else {
        printf("\nThe number is Zero.\n");
    }
return 0;
}

