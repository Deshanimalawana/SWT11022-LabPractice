#include <stdio.h>

int main() {

    int List_One[3][2] = {{3, 6}, {7, 8}, {1, 2}};
    int List_Two[3][2] = {{1, 9}, {6, 4}, {3, 5}};
    int Sum[3][2];

    printf("The Sum of the Two Matrices is := \n\n");
    printf(" --     --\n");

    for (int i = 0; i < 3; i++) {
        printf("| ");
        for (int j = 0; j < 2; j++) {
            Sum[i][j] = List_One[i][j] + List_Two[i][j];
            printf("%-4d", Sum[i][j]);
        }
        printf("|\n");
    }
    printf(" --     --\n");
    return 0;
}
