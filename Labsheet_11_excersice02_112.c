#include <stdio.h>

int main() {
    float arr[10], num;
    int found = 0;

    printf("Enter 10 floating point numbers:\n");
    for (int i = 0; i < 10; i++)
        scanf("%f", &arr[i]);

    printf("Enter a number to search: ");
    scanf("%f", &num);

    for (int i = 0; i < 10; i++) {
        if (arr[i] == num) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Number found in array.\n");
    else
        printf("Number not found in array.\n");

    return 0;
}
