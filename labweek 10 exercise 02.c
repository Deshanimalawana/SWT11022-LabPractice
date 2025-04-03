#include <stdio.h>
int main(){

    int marks[6] = {0};
    float average;
    int sum = 0;

    for (int i = 0; i < 6; i++){
        printf("enter marks: %d: ",i+1);
        scanf("%d",&marks[i]);
        sum += marks[i];
    }

    average = sum / 6;


    printf("\nThe average of the marks is: %.2f\n", average);

    return 0;
}
