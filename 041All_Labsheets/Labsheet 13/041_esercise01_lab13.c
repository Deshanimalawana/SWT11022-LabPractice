#include <stdio.h>

int main()
{
    int i, j,sum=0;
    int marr [3][3] = {34, 81, 96, 72, 48, 24, 80, 10, 71};
    int *marr_pointer;
    marr_pointer = &marr[0][0];
    printf("Adders of 2D Array\n%p\n\n", *marr_pointer);
    for(i=0; i<3; i++){
        printf("|");
        for(j=0; j<3; j++){
            printf("%p | ", &marr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0; i<3; i++){
        printf("|");
        for(j=0; j<3; j++){
            printf("%d | ", *(*(marr+i)+j));
            sum += marr[i][j];
        }
        printf("\n");
    }
    printf("\nsum of all elements: %d\n",sum);
    return 0;
}
