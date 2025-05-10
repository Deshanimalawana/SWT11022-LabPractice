#include <stdio.h>

int main() {
    int marks[5];

    for (int i = 0; i < 5; i++) {
        marks[i] = (i + 1) * 10;
    }

    printf(" Marks : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", marks[i]);
    }

    return 0;
}
