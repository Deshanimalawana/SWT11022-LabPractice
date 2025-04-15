#include <stdio.h>
int main () {

    int matrix1[3][2];
    int matrix2[3][2];
    int result[3][2];

    printf("Enter values of matrix 1 (3 x 2):\n");
    for (int i=0; i<3; i++){
        for (int j=0; j<2; j++){
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("Enter values of matrix 2 (3 x 2):\n");
    for (int i=0; i<3; i++){
        for (int j=0; j<2; j++){
            scanf("%d",&matrix2[i][j]);
        }
    }

    for (int i=0; i<3; i++){
        for (int j=0; j<2; j++){
         result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum of 2 matrices (3 x 2):\n");
     for (int i=0; i<3; i++){
        for (int j=0; j<2; j++){
    printf("%d ",result[i][j]);
        }
        printf("\n");
     }
     return 0;




}
