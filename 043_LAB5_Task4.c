#include <stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter three numbers:");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    if (num1>num2&&num1>num3)
    {
        printf("The largest number is %d\n:", num1);
    }else if(num2>num1&&num2>num3)
    {
        printf("The largest number is %d\n:", num2);
    }else
    {
        printf("The largest number is %d:", num3);
    }
    return 0;

}
