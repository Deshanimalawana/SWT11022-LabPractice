#include<stdio.h>

#define Rows 3
#define Cols 2

int main(){
    int matrix1[Rows][Cols] = {
    {3,6},
    {7,8},
    {1,2}
    };

    int matrix2[Rows][Cols] = {
    {1,9},
    {6,4},
    {3,5}
    };

    int result[Rows][Cols];
    for (int i = 0; i< Rows;i++){
        for (int j = 0;j < Cols;j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Result:\n");
    for (int i = 0;i < Rows;i++){
        for (int j = 0;j < Cols; j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
