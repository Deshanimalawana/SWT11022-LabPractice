#include <stdio.h>
int main() {
    float arry[10], num;
    int found = 0;

    printf("Enter ten floating point numbers:\n");
    for(int i = 0; i < 10; i++)
        scanf("%f", &arry[i]);

    printf("Enter number to search: ");
    scanf("%f", &num);

    for(int i = 0; i < 10; i++) {
        if(arry[i] == num) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Number found in array\n");
    else
        printf("Number not found in array\n");

    return 0;
}