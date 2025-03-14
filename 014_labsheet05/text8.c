#include <stdio.h>
int main(){

    int number;
    printf("Enter Number :");
    scanf("%d",&number);

    if( number>0){
        printf("Possitive Number");
    }else if(number < 0){
        printf("Negetive Number");
    }else{
        printf("Zero");
    }
}
