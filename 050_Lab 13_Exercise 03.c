#include <stdio.h>

void findMaxMin(int a, int b, int *max, int *min) {
    *max = (a > b) ? a : b;
    *min = (a < b) ? a : b;
}

int main() {
    int a = 7, b = 13, max, min;
    findMaxMin(a, b, &max, &min);
    printf("Max: %d\nMin: %d\n", max, min);
    return 0;
}
