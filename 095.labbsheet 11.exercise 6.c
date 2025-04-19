#include<stdio.h>
int main(){
    int matr1[3] [2],matr2[3][2], result[3][2];
    printf("enter value of matrix 1 (2*3):\n");
    for(int i=0;i<2;i++){
        for(int j=0; j<3; j++){
            scanf("%d",&matr1[i][j]);
            }
    }

    printf("enter value of matrix 2(2*3):\n");
    for(int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            scanf("%d",&matr2[i][j]);
        }
    }
    return 0;
}
