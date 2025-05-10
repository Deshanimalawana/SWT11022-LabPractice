#include <stdio.h>

int main() {
    int value[10];
    int unique[10];
    int count = 0;
    int Duplicate;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &value[i]);
    }

    for (int i = 0; i < 10; i++) {
        Duplicate = 0;
        for (int j = 0; j < count; j++) {
            if (value[i] == unique[j]) {
                Duplicate = 1;
                break;
            }
        }
        if (!Duplicate) {
            unique[count++] = value[i];
        }
    }

    printf("\nUnique values are: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}
