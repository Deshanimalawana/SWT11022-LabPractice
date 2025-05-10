#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, arr[10];

    printf("Enter 10 Numbers :\n");
    for(i=0; i<10; i++){
      scanf("%d", &arr[i]);
    }

    printf("\nIn Reverse :");
    for(i=9; i>=0; i--){
      printf(" %d ",arr[i]);
    }

    return 0;

}
