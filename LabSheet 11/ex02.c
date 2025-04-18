#include<stdio.h>

int main(){

    float num[10];
    float x;

    printf("floating point numbers : \n");
    for (int i = 0; i < 10; i++){
        scanf("%f",&num[i]);

    }

    printf("Enter another floating point number : \n");
    scanf("%f",&x);

    for(int i = 0; i < 10; i++){
        if (num[i]==x){
            printf("The number is present in array : ");
        }
    }
return 0;

}
