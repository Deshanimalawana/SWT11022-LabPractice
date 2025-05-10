#include<stdio.h>
int main () {
int num1;
int num2;
int num3;

printf("Enter the numbers:");
    scanf ("%d %d %d", &num1 ,&num2 ,&num3);

if(num1>num2 && num1>num3){
    printf("The largest number is %d\n",num1);
}
else if(num2>num1 && num2>num3){
    printf("The largest number is %d\n",num2);
}
else if(num3>num1 && num3>num2){
    printf("The largest number is %d\n",num3);
}
return 0;
}
