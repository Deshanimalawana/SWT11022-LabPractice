#include<stdio.h>
int main(){

    int matrx1 [2][3], matrx2[2][3], result[2][3];

    printf("Enter values of matrix 1(3x2): \n");
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d",&matrx1[i][j]);
        }
    }

    printf("Enter values of matrix 2 (3x2): /n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d",&matrx2[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            result[i][j] = matrx1[i][j] + matrx2 [i][j];
        }
    }


    printf("Sum of the two matrixes (3x2): \n");
    for(int i = 0; i<3; i++){
     for (int j = 0; j < 2; j++){
        printf("%d", result[i][j]);
     }
     printf("\n") ;
    }

    return 0;

}
