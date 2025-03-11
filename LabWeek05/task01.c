#include <stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    if((num%2) == 0){
        printf("this is even number");
    }else{
    printf("this is a odd number");
    }
}
