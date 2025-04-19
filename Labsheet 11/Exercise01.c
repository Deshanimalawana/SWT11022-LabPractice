#include <stdio.h>

int main() {
    int num[10];

    printf("Enter Ten Numbers:- ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    printf("The Array Elements Reverse Order:- \n");
    for (int i = 9; i >= 0; i--) {
        printf("%d\t", num[i]);
    }

    return 0;
}
