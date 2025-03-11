#include <stdio.h>
int main() {
    int num1 , num2 , num3;
    printf("Enter your 1st number:");
    scanf("%d",&num1);
    printf("Enter your 2nd number:");
    scanf("%d",&num2);
    printf("Enter your 3rd number:");
    scanf("%d",&num3);

    if(num1 > num2 )
        if(num1 > num3){
            printf("%d is largest number.",num1);
        }else{
            printf("%d is largest number.",num3);
        }if(num2 > num3){
            printf("%d is largest number.",num2);
        }else{
            printf("%d is largest number.",num3);
        }
    return 0;
}
