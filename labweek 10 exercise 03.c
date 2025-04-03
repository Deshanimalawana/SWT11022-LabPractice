#include <stdio.h>

int main () {

    float marks[10];
    float max;


    for (int i=0; i<10; i++){
        printf("enter numbers: ");
        scanf("%f", &marks[i]);
    }

    max = marks[0];

    for (int i=0; i<10; i++){
        if(marks[i]>max){
            max=marks[i];
        }
    }
    printf("Max value is: %.2f", max);

}
