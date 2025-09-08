#include<stdio.h>
int main(){
int matrix1[3][2];
int matrix2[3][2];
int result[3][2];
printf("Enter matrix 1 values\n");
for(int i=1;i<=3;i++){
    for(int j=1;j<=2;j++){
        scanf("%d",&matrix1[i][j]);
    }
}
printf("\nEnter matrix 2 values\n");
for(int i=1;i<=3;i++){
    for(int j=1;j<=2;j++){
        scanf("%d",&matrix2[i][j]);
    }
}
printf("\nSum of 2 matrixes\n");

for(int i=1;i<=3;i++){
    for(int j=1;j<=2;j++){
result[i][j]=matrix1[i][j]+matrix2[i][j];
    }
}

for(int i=1;i<=3;i++){
    for(int j=1;j<=2;j++){
        printf("%d ",result[i][j]);
    }
    printf("\n");
}
return 0;
}
