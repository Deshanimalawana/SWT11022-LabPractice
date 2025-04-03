#include<stdio.h>
int main(){
    float num[10];
    float max;

    printf("Enter marks:\n");
    for(int i=0;i<10;i=i+1){

        scanf("%f",&num[i]);
    }
    max=num[0];

    for(int i=0;i<10;i=i=i+1){
        if(num[i]> max){
            max=num[i];


        }}

    printf("The largest number is:%f",max);
    return 0;
}
