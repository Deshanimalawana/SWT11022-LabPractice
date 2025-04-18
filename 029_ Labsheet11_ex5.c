#include <stdio.h>

    int main() {

        int marks[2][5];

        for (int i = 0; i < 2; i++) {
            printf("Student %d marks:\n", i + 1);
            for (int sub_cnt = 0; sub_cnt < 5; sub_cnt++) {
                printf("\tSubject %d: ", sub_cnt + 1);
                scanf("%d", &marks[i][sub_cnt]);
            }
        }

        printf("\nStudent Marks:\n");
        for (int i = 0; i < 2; i++) {
            printf("Student %d: ", i + 1);
            for (int sub_cnt = 0; sub_cnt < 5; sub_cnt++) {
                printf("%d ", marks[i][sub_cnt]);
            }
            printf("\n");
        }

    return 0;
}
