#include<stdio.h>
int main()
{
    int arr[3]={10,20,30};
    int *p=arr;

    printf("%d\n", *p);
    printf("%d\n",*(p+1));

    return 0;
}
