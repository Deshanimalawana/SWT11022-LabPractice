#include<stdio.h>
int main(){
    int marks[6];
    float average=0;
    int sum=0;

    printf("Enter the marks for six subjects:\n");

    for(int i=0;i<6;i++){
        printf("Subject%d: ",i+1);
        scanf("%d",&marks[i]);
    }
    for (int i=0;i<6;i++){
        sum+=marks[i];
    }
    average=(float)sum/6;

    printf("\nAverage Marks:%.2f\n",average);

    return 0;
}
