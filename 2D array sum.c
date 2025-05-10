#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matr1[3][2], matr2[3][2], result[3][2];
    printf("Enter values of matrix 1 (3x2):\n");
    for (int i=0;i<3;i++){
        for(int j=0; j<2; j++){
            scanf("%d", &matr1[i][j]);
        }
    }
    printf("Enter values of matrix 2 (3x2)\n");
    for (int i=0; i<3; i++){
        for(int j=0; j<2;j++){
            scanf("%d",&matr2[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for (int j=0; j<2; j++){
            result[i][j]=matr1[i][j]+matr2[i][j];
        }
    }

    printf("Sum of the two matrices (3x2):\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%d\n", result[i][j]);
        }

    }
    return 0;
}
