#include <stdio.h>
int main()
{
    // For loop to print odd number from 1 to 10
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // skip even numbers
        }
        printf("%d ", i);
    }
    return 0;
}
