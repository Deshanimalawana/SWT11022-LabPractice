#include <stdio.h>

int main()
{
    int i,sum=0;
    int num[10];
    int *sum_pointer;
    sum_pointer = &sum;
    printf("Enter the numbers:\n");
    for(i=0; i<10; i++){
        scanf("%d", &num[i]);
    }
    for(i=0; i<10; i++){
        *sum_pointer+=num[i];
    }
    printf("\nSum of ten numbers: %d\n", *sum_pointer );
    return 0;
}
