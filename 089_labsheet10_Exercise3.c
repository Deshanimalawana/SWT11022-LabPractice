#include<stdio.h>
int main(){
    float numbers[10];
    float max;

    printf("Enter 10 float numbers:\n ");
    for(int i=0; i<10; i++){
        scanf("%f  ",&numbers[i]);

    }
    max=numbers[0];
    for(int i=1; i<10; i++){
        if(numbers[i]>max){
            max=numbers[i];
        }
    }

printf("The maximum number is: %f\n",max);

return 0;



}
