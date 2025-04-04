#include <stdio.h>
int main () {

    float num[10];
    float max;

    printf("Enter marks of 10 students!\n");
    for (int i=0; i<10; i++){
        printf("Enter marks of student no %d: ",i+1);
        scanf("%f",&num[i]);
    }
    max=num[0];

    for (int i=0; i<10; i++){
        if (num[i]>max){
            max=num[i];
        }
    }

    printf("\nMaximum number is %.2f",max);

    return 0;
}

