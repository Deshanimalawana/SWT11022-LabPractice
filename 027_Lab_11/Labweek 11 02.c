#include<stdio.h>

int main(){

    float arr[10],num;
    int found = 0;

    printf("Enter 10 floating point numbers:\n");
    for (int i = 0;i < 10; i++){
        scanf("%f",&arr[i]);
    }

    printf("Enter a Number to search:");
    scanf("%f",&num);

    for (int i = 0;i < 10;i++){
        if(arr[i]== num){
            found = 1;
            break;
        }
    }
    if (found = 1){
        printf("Number %.2f is present in the array.\n",num);
    }else{
        printf("Number %.2f is not present in the array.\n",num);
    }
    return 0;
}
