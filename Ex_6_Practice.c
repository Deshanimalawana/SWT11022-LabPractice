#include <stdio.h>
int main(){
    int matric1[3][2] = {{3,5},{7,8},{1,2}};
    int matric2[3][2] = {{1,9},{6,4},{3,5}};

    int sum[3][2];

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            sum[i][j] = matric1[i][j] + matric2[i][j];
        }
    }

    printf("Sum => \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%d\t",sum[i][j]);
        }
    printf("\n");
    }
    return 0;
}
