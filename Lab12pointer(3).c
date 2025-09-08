#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3]={1,2,3};
    int *p=arr;
    printf("%d\n",*p);
    printf("%d\n",*(p+1));
    return 0;
}
