#include<stdio.h>
int main(){

int mart1[3][2],mart2[3][2],result[3][2];

printf("Enter value of matrix 1(3x2):\n");
for(int i=0;i<3;i++){
    for(int j=0;j<2;j++) {
        scanf("%d", &mart1[i][j]);
    }
}

printf("Enter value of matrix 2(3x2):\n");
for(int i=0;i<3;i++){

    for(int j=0;j<2;j++) {
        scanf("%d", &mart2[i][j]) ;
    }
}

for(int i =0; i<3;i++){

    for(int j=0;j<2;i++) {
        result[i][j] = mart1[i][j] + mart2[i][j];
    }
}

printf("sum of the  two matrices( 3 x 2) :\n ");

for(int i=0; i<3; i++){
    for(int j=0; j<2 ;j++) {
        printf("%d", result[i][j]);
    }
    printf("\n");
}

return 0;
}

