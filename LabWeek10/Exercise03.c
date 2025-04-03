#include <stdio.h>
int main(){
    float numbers[10];
    float max;
    for(int i = 0;i<10;i++){
        printf("Enter a number (%d): ",i+1);
        scanf("%f",&numbers[i]);
        if (numbers[i]>max){
            max = numbers[i];

        }
    }
    printf("%.4f",max);
}
