#include<stdio.h>
int main(){

int mat1[3][2],mat2[3][2],resultMat[3][2];


printf("Enter values of matrix 1(3*2):\n");
for (int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        scanf("%d",&mat1[i][j]);
    }
}

printf("Enter values of matrix 2(3*2):\n");
for (int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        scanf("%d",&mat2[i][j]);
    }
}

for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        resultMat[i][j] = mat1[i][j]+mat2[i] [j];
    }
}

printf("Sum of the two matrixes(3*2):\n");
for (int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d",resultMat[i][j]);
    }
}


return 0;
}
