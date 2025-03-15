#include <stdio.h>
#include <stdlib.h>



int main()
{
    int num1, num2, num3;
    printf("Enter Number 01 : ");
    scanf("%d", &num01);
    printf("Enter Number 02 : ");
    scanf("%d", &num02);
    printf("Enter Number 03 : ");
    scanf("%d", &num03);

    if (num1<num2){
            if (num2<num3){
                printf("Largest Number is 3rd:%d", num3);
            }else {
                printf("largest Number is 2nd:%d", num2);
            }
    }else if (num1<num3){
        printf("Largest Number is 3rd:%d", num3);
        }else{
        printf("Largest Number is 1st:%d", num1);
        }

    return 0;
}
