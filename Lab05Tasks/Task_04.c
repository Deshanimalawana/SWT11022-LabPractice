#include <stdio.h>

int main(void){
    int num1, num2, num3;
    printf("Enter Three Numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if ((num1 > num2) && (num1 > num3)) {
        printf("The Largest Number is %d\n", num1);
    }
    else if (num2 > num3){
        printf("The Largest Number is %d\n", num2);
    }
    else{
        printf("The Largest Number is %d\n", num3);
    }

    return 0;
}