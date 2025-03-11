#include <stdio.h>
int main() {

    int num1;
    int num2;
    int num3;
    printf("Enter number 1:\n",num1);
    scanf("%d",&num1);
    printf("Enter number 2:\n",num2);
    scanf("%d",&num2);
    printf("Enter number 2:\n",num3);
    scanf("%d",&num3);


    if(num1>num2 & num1>num3){
            printf("large number: %d\n",num1);
          }else if(num2>num3){
          printf("large number: %d\n",num2);
          }else {
          printf("large number : %d\n",num3);
          }
}
