#include<stdio.h>
int main()
{
    float average, sum = 0;

    int sub_marks[6];
    for(int i=0;   i<=5; i++){
        printf("Enter a marks :");
        scanf("%d",&sub_marks[i]);
        sum += sub_marks[i];

    }
    printf("\n");
    printf("Subject Marks :");
    for(int i=0; i<6; i++){
        printf("%d ",sub_marks[i]);
    }
    average = sum / 6;
    printf("\nAverage :%.2f",average);
    printf("\n");
    return 0;
}
