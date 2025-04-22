#include <stdio.h>

int main() {
    int x[10];
    int y;

    printf("Enter 10 numbers:\n");
    for (y = 0; y < 10; y++) {
        scanf("%d", &x[y]);
    }

    if (y == 10) {
        printf("Numbers in reverse order:\n");
        for (y = 9; y >= 0; y--) {
            printf("%d\n", x[y]);
        }
    }
    return 0;
}
