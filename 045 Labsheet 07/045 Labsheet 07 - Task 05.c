#include <stdio.h>

int main() {

    for (int num = 1; num <= 20; num++) {
        if (num % 2 != 0) {
            continue;
        }
        printf("%d ", num);
    }

    return 0;
}
