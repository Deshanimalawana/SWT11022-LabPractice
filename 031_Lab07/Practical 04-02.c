#include<stdio.h>

int main() {
    //For loop to print odd numbers from 1 to 10
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;//Skip even numbers
        }
        printf("%d ",i);
    }
    return 0;
}
