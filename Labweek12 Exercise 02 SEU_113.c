#include<stdio.h>
int main()
{
    int inputs[10],sum,*ptr;


    ptr = inputs;

    for(int i=0;i<10;i++){

        printf("Enter Number %d: ",i+1);
        scanf("%d",ptr++);

    }
    ptr = inputs;

    for(int i=0;i<10;i++){


        sum += *ptr++;

    }
    printf("Sum of All Inputs: %d",sum);

    return 0;

}
