#include <stdio.h>
int main(){
    float marks[6];
    float sum=0.0,average;

    printf("Please enter the marks of 6 subjects:\n");

    for (int i=0; i<6; i++){
        printf("Enter marks for subject %d:", i+1);
        scanf("%f", &marks[i]);
        sum+=marks[i];
    }
    average=sum/6;

    printf("\nThe marks entered are:\n");
    for (int i=0; i<6; i++){
        printf("Subject %d: %.2f\n",i+1,marks[i]);
    }
    printf("\nThe avarage of the marks is: %.2f\n", average);

    return 0;
}
