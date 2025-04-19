#include <stdio.h>
#include <stdlib.h>

int main(){
    float arr[10];
    float Num;
    int i, found = 0;

    printf("Enter 10 floating-point numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%f", &arr[i]);
    }
    printf("Enter a number to search: ");
    scanf("%f", &Num);

    for(i = 0; i < 10; i++) {
        if(arr[i] == Num) {
            found = 1;
            break;
        }
    }
    if(found) {
        printf("The number %.2f is present in the array.\n",Num);
    } else {
        printf("The number %.2f is not present in the array.\n",Num);
    }

    return 0;
}
