#include<stdio.h>
int main()
{

    int max;
    int marks[10];
    printf("enter the 10 students marks:\n");
    for(int i=0; i<10; i++){
        printf("marks %d: ",i);
        scanf("%d",&marks[i]);
    }
    max=marks[0];
    for(int i=1; i<10; i++){
        if(marks[i]>max){
            max=marks[i];
        }
    }

    printf("Enter max marks: %d\n",max);
    return 0;
}
