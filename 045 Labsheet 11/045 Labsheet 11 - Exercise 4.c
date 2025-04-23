#include <stdio.h>

int main() {
    int numbers[10], unique[10];
    int i, x, duplicate, uniqueNumbers = 0;

    printf("Enter 10 integer numbers:\n");
    for(i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for(i = 0; i < 10; i++) {
        duplicate = 0;

        for(x = 0; x < uniqueNumbers; x++) {
            if(numbers[i] == unique[x]) {
                duplicate = 1;
                break;
            }
        }

        if(!duplicate) {
            unique[uniqueNumbers] = numbers[i];
            uniqueNumbers++;
        }
    }

    printf("\nUnique numbers:\n");
    for(i = 0; i < uniqueNumbers; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}
