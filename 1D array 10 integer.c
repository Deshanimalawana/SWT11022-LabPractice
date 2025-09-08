#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr_value[10];

    printf("Enter 10 integers here:\n");
    for (int i =0; i<10; i++){

        scanf("%d", &arr_value[i]);
    }
    printf("Array in reverse order:\n");
    for (int i=9; i>=0; i--){
        printf("%d\n", arr_value[i]);
    }
    return 0;
}
