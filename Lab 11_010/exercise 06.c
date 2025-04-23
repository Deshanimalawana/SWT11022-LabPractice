#include<stdio.h>
int main()
{
    int matrl[3][2],matr2[3][2],result[3][2];
    printf("Enter value of matrix 1(3x2):\n");
    for(int i=0; i<3; i++){for(int j=0; j<2; j++){
        scanf("%d",&matrl[i][j]);}
    }
    printf("Enter value of matrix 2(3x2):\n");
    for(int i=0; i<3; i++){for(int j=0; j<2; j++){
        scanf("%d",&matr2[i][j]);}
    }

    for(int i=0; i<3; i++){for(int j=0; j< 2; j++){result [i][j]=matrl[i][j]+ matr2[i][j];}
    }
    printf("sum of the tow matrix (3x2):\n");
    for(int i=0; i<3; i++){for(int j=0; j<2; j++){printf("%d ", result [i][j]);}
    printf("\n");

    }
    return 0;
}
