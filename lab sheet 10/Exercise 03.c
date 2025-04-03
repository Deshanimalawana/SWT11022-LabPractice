#include<stdio.h>
int main() {

    float number[10];
    float max;


    for (int i=0;i<10; i++){
        printf("Enter marks for student%d:",i+1);
        scanf("%f",&number[i]);
    }

    max=number[0];

    for (int i=i; i<10; i++){
        if (number[i]>max){
            max=number[i];
        }
    }
    printf("max value=%.2f", max);
    return 0;
}
