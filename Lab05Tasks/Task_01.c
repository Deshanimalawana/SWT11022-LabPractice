#include <stdio.h>

int main(void){
    int val;
    printf("Enter a Number : ");
    scanf("%d", &val);
    if (val%2 == 1){
        printf("The Number is Odd\n");
    }
    else{
        printf("The Number is Even\n");
    }

    return 0;
}