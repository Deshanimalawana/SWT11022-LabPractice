#include <stdio.h>
void findMaxMin(int *n1, int *n2, int *Max, int *Min){
    if(*n1>*n2){
        *Max = *n1;
        *Min = *n2;
    }else{
        *Max = *n2;
        *Min = *n1;
    }
}
int main()
{
    int num1,num2,Max,Min;
    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);

    findMaxMin(&num1,&num2,&Max,&Min);
    printf("The %d is Max Number..!\n", Max);
    printf("The %d is Min Number..!\n", Min);

    return 0;
}
