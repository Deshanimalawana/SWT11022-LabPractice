#include <stdio.h>
int main() {
    int stu[2][5] = {{85,45,67,22,35},{96,87,75,69,78};


    printf("Student marks each student.\n");
    for (int i = 0; i < 2; i++) {
        printf("Student %d \n", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("Subject %d: %d\n", j + 1, stu[i][j]);
        }
        printf("\n");
    }


    return 0;
}
