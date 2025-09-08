#include<stdio.h>

int main(){
    float Num[10], Max = 0;


    printf("Enter Values : \n");

    for(int i = 0; i < 10; i++){
        printf("Enter mark %d : ",i + 1);
        scanf("%f", &Num[i]);
    }

    for(int i = 0; i < 10; i++){
        if (Max < Num[i]){
            Max = Num[i];
        }
    }
    printf("\nHighest mark is : %.2f", Max);

    return 0;
}
