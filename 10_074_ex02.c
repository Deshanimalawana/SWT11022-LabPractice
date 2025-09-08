#include<stdio.h>
int main()
{
    int marks[5];
    float average,sum=0;


    for (int i=0; i<5; i++){
        printf("marks:  ",i+1);
        scanf("%d",&marks[i]);
         sum+= marks[i];

    }

     average=sum/5;
    printf("average is: %.2f",average);


    return 0;
}
