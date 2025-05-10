#include <stdio.h>

int main(){
    int marks[6];
    float average;

    for(int i = 0; i < 6; i++){
        printf("Enter Marks for student %d : ", i+1);
        scanf("%d", &marks[i]);
        average += marks[i];
    }

    average = average / 6;
    printf("Average is = %.2f", average);

return 0;
}

