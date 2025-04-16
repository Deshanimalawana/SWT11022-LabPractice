#include <stdio.h>

int main() {
    float arr[10], num;
    int i, found = 0;


    printf("Enter 10 floating-point numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%f", &arr[i]);
    }


    printf("Enter a floating-point number to search: ");
    scanf("%f", &num);


    for(i = 0; i < 10; i++) {
        if(arr[i] == num) {
            found = 1;
            break;
        }
    }


    if(found)
        printf("%.2f is present in the array.\n", num);
    else
        printf("%.2f is NOT present in the array.\n", num);

    return 0;
}
