#include <stdio.h>

int main() {
    float num[10];
    float new_num;

    printf("Enter Ten Floating points Numbers: -\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &num[i]);
    }

    printf("\nEnter New Number:- ");
    scanf("%f", &new_num);

    for (int i = 0; i < 10; i++) {
        if (num[i] == new_num) {
            printf("The number %.2f is present in the num Array List..\n", new_num);
            return 0;
        }
    }
    printf("\nThe number %.2f is NOT present in the num Array List..\n", new_num);

    return 0;
}
