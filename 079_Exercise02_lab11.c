#include <stdio.h>

int main() {
    int numbers[10];



    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }


    printf("Array in reverse order:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
