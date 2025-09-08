#include <stdio.h>

int main() {
    float arr[10], num;
    int found = 0;

    for(int i = 0; i < 10; i++) {
        printf("Enter float %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%f", &num);

    for(int i = 0; i < 10; i++) {
        if(arr[i] == num) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Number is present in the array.\n");
    else
        printf("Number is not present in the array.\n");

    return 0;
}
