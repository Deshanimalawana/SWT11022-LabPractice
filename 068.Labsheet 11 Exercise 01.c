#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int i;

    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements in reverse order:\n");
    for(i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
