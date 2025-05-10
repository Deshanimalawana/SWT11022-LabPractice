#include <stdio.h>

int main() {
    int students_marks[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%d", &students_marks[i]);
    }

    return 0;
}
