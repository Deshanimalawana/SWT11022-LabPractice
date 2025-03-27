#include <stdio.h>
int main()
{
    int firstEven = 0;

    // Loop to find the first even number in a sequence
    for (int i = 1; ; i++) {
        if (i % 2 == 0) {
            firstEven = i;
            break; // Exit loop when the first even number is found
        }
    }

    printf ("The first even number is: %d\n", firstEven);
    return 0;
}
