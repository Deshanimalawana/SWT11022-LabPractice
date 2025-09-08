#include <stdio.h>

int main() {
    float numbers[10], num;
    int i,found = 0;


    printf("Enter 10 floating-point numbers: \n");
    for(int i=0; i<10; i++) {
        scanf("%f", &numbers[i]);
    }

    printf("Enter a floating-point number to search: ");
    scanf("%f", &num);


    for(i=0; i<10; i++) {
        if(numbers[i] == num) {
            found = 1;
            break;
        }
    }


    if(found)
        printf("%.2f is present in the array.\n", num);
    else
        printf("%.2f is not present in the array.\n", num);


return 0;

}
