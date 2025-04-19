#include <stdio.h>  

int main() {  
    int i,j;
    int matrix1[3][2] = {{3,6}, {7,8}, {1,2}};  
    int matrix2[3][2] = {{1,9}, {6,4}, {3,5}};  
    int result[3][2];  

    for(i = 0; i < 3; i++) {  
        for(j = 0; j < 2; j++) {  
            result[i][j] = matrix1[i][j] + matrix2[i][j];  
        }  
    }  

    printf("Result Matrix:\n");  
    for(i = 0; i < 3; i++)
    {  
        for(j = 0; j < 2; j++)
        {
        printf("\t%d",result[i][j]);
        }
        printf("\n");
    }  
    return 0;  
}  