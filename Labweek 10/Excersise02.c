#include<stdio.h>
int main(){

    int marks[6];

    float average,sum = 0;



    for (int i=0; i< 6;i++){
        printf("Enter mark for subject %d:",i+1);
        scanf("%d",&marks[i]);
        sum += marks[i];
    }

    average=sum/6;

    printf("\n Marks entered:\n");

        for(int i=0;i<6; i++){
                printf("subject %d:\n",i+1,marks[i]);
            }

    printf("\n Average:%.2f\n",average);

    return 0;






}
