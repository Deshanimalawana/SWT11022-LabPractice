#include <stdio.h>

int main() {
    int numbers[10], unique[10], count = 0, isDuplicate;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 10; i++) {
        isDuplicate = 0;
        for (int j = 0; j < count; j++) {
            if (numbers[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unique[count++] = numbers[i];
        }
    }

    printf("Unique values: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}
