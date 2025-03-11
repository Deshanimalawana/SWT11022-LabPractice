#include <stdio.h>
int main(){
    int number01;
    int number02;
    int number03;

    printf("Enter three numbers", number01,number02,number03);
    scanf("%d%d%d", &number01, &number02, &number03);

    if(number01>number02 & number01>number03){
            printf("The largest number is:%d", number01);


    }else if (number02> number03){
        printf("The largest number is:%d", number02);

    }else {
        printf("The largest number is:%d", number03);
    }

    return 0;
}
