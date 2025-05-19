#include <stdio.h>
int main (){
    int arr[3][3]={
    {34,81,96},
    {72,48,24},
    {80,10,71}
    };

    int (*ptr)[3] = arr;

    printf("Address of 2D array :%p \n",(void*)ptr);
    printf("\n");

    for(int i=0;i<3;i++){
        printf("Address of row %d :%p\n",i,(void*)(ptr + i));
    }

    printf("\n Address of each elements :\n");
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("&arr[%d][%d] = %p\n", i, j, (void*)&ptr[i][j]);
        }
    }

    printf("\nElements of the array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += *(*(ptr + i) + j);
        }
    }
    printf("\nSum of all elements: %d\n", sum);

    return 0;
}


