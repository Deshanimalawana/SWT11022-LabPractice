#include<stdio.h>
int main(){

    int num1, num2 ,num3, largest;

    printf("Enter three numbers:");
    scanf("%d %d %d", &num1,&num2,&num3);

    if(num1>=num2 && num1>=num3){
        printf("the largest num is %d\n",num1);
    }
    if(num2>=num1 && num2>=num3){
        printf("the largest num is %d\n",num2);
}
    if(num3>=num2 && num3>=num1){
         printf("the largest num is %d\n",num3);
    }

    return 0;
}
