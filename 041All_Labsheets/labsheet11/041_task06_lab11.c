#include <stdio.h>
int main() {
    int table1[3][2] = {{3,6}, {7,8}, {1,2}};
    int table2[3][2] = {{1,9},{6,4}, {3,5}};
    int result[3][2];

    printf("Result is. \n");
    for(int i=0; i<3;i++){
        for(int x=0; x<2; x++){
            result[i][x] = table1[i][x] + table2[i][x];
            printf("%d\t", result[i][x]);
        }
        printf("\n");
    }

    return 0;
}
