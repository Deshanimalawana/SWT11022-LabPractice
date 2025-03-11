#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(number % 2 == 0){
        printf("This is a even number.\n ");
    }else{
        printf("This is a odd number.\n ");
    }
    return 0;
}
