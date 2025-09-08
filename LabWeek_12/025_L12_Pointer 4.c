#include <stdio.h>
int main()
{
    int num1 = 10, num2 = 20;
    int *ptr1, *ptr2;
    int temp;

    //Initialize pointers
    ptr1 = &num1;
    ptr2 = &num2;

    //Print original values
    printf("Before swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    //Swapping using pointers
    temp = *ptr1;   // Store value at ptr1 (num1) in temp
    *ptr1 = *ptr2;  // Copy value at ptr2(num2) to where ptr1 points (num1)
    *ptr2 = temp;   // Copy value from temp to where ptr2 points (num2)

    // Print swapped values
    printf("\nAfter swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
