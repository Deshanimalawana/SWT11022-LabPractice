#include<stdio.h>
int main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if (number%2==0){
        printf ("\nthis  number is evan.");
    } else{
        printf("\nThis number is odd.");
    }
    return 0;


}
