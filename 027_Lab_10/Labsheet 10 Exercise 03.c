#include<stdio.h>

int main(){

    float numbers[10];
    float max_value;

    printf("Enter 10 student marks\n");

    for (int i = 0; i<10; i++){
        printf("Enter marks:");
        scanf("%f",&numbers[i]);
    }

    max_value = numbers[0];

    for(int i = 0;i<10;i++){
        if(numbers[i]>max_value){
            max_value = numbers[i];
        }
    }

    printf("Maximum Value is:%.2f",max_value);

    return 0;

}
