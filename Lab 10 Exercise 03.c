#include <stdio.h>
int main(){

    float number[10];
    float max;

    printf("Enter 10 float numbers:\n");

    for (int i =0; i<10; i++){
        scanf("%f",&number[i]);

    }

    max= number[0];
        for (int i =1 ; i<10; i++){
            if(max < number[i]){
                max= number[i];
            }

        }

        printf("The largest number is: %f\n", max);

    return 0;


}
