#include <stdio.h>

int main() {
    float numbers[10];
    float anotherNum;
    int x=0;

    printf("Enter 10 floating point numbers:\n");
    for (int i = 0; i < 10; i++) {

        scanf("%f", &numbers[i]);
    }
    printf("Enter a another number: ");
    scanf("%f", &anotherNum);


    for (int i = 0; i < 10; i++) {
        if (numbers[i] == anotherNum) {
            x=1;
        }
    }
if (x==1) {
        printf("\n%2f is present in the array.\n", anotherNum);

    } else {
        printf("\n%.2f is not present in the array.\n", anotherNum);
    }

    return 0;
}
