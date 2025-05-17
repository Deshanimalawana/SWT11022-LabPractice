#include <stdio.h>
void MaxMin(int *n1, int *n2, int *Max, int *Min){
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
    printf("Enter the the numbers: ");
    scanf("%d %d", &num1, &num2);

    MaxMin(&num1,&num2,&Max,&Min);
    printf("%d is Max\n", (void*)Max);
    printf("%d is Min\n", (void*)Min);

    return 0;
}
