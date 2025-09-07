#include <stdio.h>

int main() {
    int value[10];

    printf("Enter Ten Integer Numbers:- ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &value[i]);
    }

    printf("The Unique Numbers are:- \n");
    for (int i = 0; i < 10; i++) {
        int count = 0;

        for (int j = 0; j < 10; j++) {
            if (value[i] == value[j]) {
                count++;
            }
        }

        if (count == 1) {
            printf("%d\t", value[i]);
        }
    }

    printf("\n");
    return 0;
}
