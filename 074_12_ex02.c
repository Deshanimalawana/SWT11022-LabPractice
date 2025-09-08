#include<stdio.h>
int main()
{
    int num[10];
    int sum=0;

    int *ptr;


  for(int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    ptr=num;
    for(int i = 0; i < 10; i++) {
        sum += *(ptr + i);
    }
    printf("sum of the 10 numbers: %d",sum);

    return 0;
}

