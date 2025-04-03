#include<stdio.h>
int main(){

int subject[6];
float average;
float sum;

 printf("Enter marks for 6 subjects:\n");

 for (int i = 0; i < 6; i++) {
        printf("%d: ", i);
        scanf("%d", &subject[i]);
        sum=sum+subject[i];
    }

average = sum / 6;


printf("Marks Entered:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d: %d\n", i + 1, subject[i]);
    }

    printf("\nAverage Marks: %.2f\n", average);



return 0;
}
