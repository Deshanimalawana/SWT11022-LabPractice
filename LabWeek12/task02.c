#include <stdio.h>

int main(){
    int arr[3] = {2,3,4};
    int *p = arr;

    printf("%d\n",*p);
    printf("%d\n",*(p+1));
}
