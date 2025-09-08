#include <stdio.h>
int main (){

    int marks[2][5] = {{80,90,86,75,70},{78,85,63,92,79}};

    printf("<---Student Marks Details --->\n\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Student %d Subject [%d] Marks:- %d\n", i+1, j+1, marks[i][j]);
        }
      	printf("\n");
    }
    return 0;
}
