#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if (num >0){
        printf("This number is positive\n",num);
    }

    else if (num < 0){
        printf("This number is negative\n",num);
    }

    else{
        printf("This number is 0\n",num);
    }


    return 0;

}
