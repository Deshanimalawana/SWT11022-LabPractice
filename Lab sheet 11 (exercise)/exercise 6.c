#include <stdio.h>
int main(){

    int matrix1[3][2], matrix2[3][2], result[3][2];

    printf("Enter Values for matrix 1 (3 X 2): \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter Values for matrix 2 (3 X 2): \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Sum of the two matrices (3 X 2): \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;

}
