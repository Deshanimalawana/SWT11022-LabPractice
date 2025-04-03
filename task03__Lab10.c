#include <stdio.h>

int main(){
    float numbers[10];

    float maxValue ;

    printf("Enter 10 floting point numbers");
    for(int i = 0; i<10; i++){
        scanf("%f", &numbers);

    }

    for(int i = 0; i < 10; i++){
        if(numbers[i] > maxValue){
                maxValue = numbers[i];

        }
    }

    printf("The max value is:-%f \n", maxValue);

    return 0;

}
