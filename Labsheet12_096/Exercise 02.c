
#include <stdio.h>

int main() {
    int num[10], sum = 0;
    int *ary = num;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", ary + i);
    }

    for (int i = 0; i < 10; i++) {
        sum += *(ary + i);
    }

    printf("Total  is: %d\n", sum);

    return 0;
}
