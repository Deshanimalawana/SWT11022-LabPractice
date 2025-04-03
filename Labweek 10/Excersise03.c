#include<stdio.h>
int main(){

    float numbers[10];
    float maximum;

    for (int i = 0; i<10;i++){
            printf("Enter %d number:",i+1);
            scanf("%f",&numbers[i]);
    }

     maximum = numbers[0];

     for (int i =0;i<10;i++){
        if (numbers[i]>maximum){
            maximum =numbers[i];
        }
     }

     printf("maximum values =%.2f",maximum);











}
