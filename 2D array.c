#include <stdio.h>

int main() {
    int marks[2][5];
    int a, b;


    for(a = 0; a < 2; a++) {
        printf("Enter marks for Student %d:\n", a + 1);
        for(b = 0; b < 5; b++) {
            printf("Subject %d: ", b+ 1);
            scanf("%d", &marks[a][b]);
        }
    }

    // Step 2: Display marks for each student
    for(a= 0; a < 2; a++) {
        printf("\nMarks of Student %d:\n", a + 1);
        for(b = 0; b < 5; b++) {
            printf("Subject %d: %d\n", b + 1, marks[a] [b]);
        }
    }

    return 0;
}
