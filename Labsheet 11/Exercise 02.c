#include <stdio.h>
int main() {
    float values[10], key;
    int found = 0;

    // Read 10 float values
    for(int i = 0; i < 10; i++) {
        printf("Enter float %d: ", i + 1);
        scanf("%f", &values[i]);
    }

    // Read number to search
    printf("Enter a number to search: ");
    scanf("%f", &key);

    // Search for the number
    for(int i = 0; i < 10; i++) {
        if(values[i] == key) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Number is found in the array.\n");
    else
        printf("Number is not found in the array.\n");

    return 0;
}
