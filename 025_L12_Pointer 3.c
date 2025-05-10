#include <stdio.h>
int main()
{
    int arr[3] = {1, 2, 3};
    int *p = arr; // same as &^arr[0]

    printf("%d\n", *p); // 1
    printf("%d\n", *(p + 1)); // 2

    return 0;
}
