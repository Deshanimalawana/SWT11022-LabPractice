#include <stdio.h> // Fixed incorrect header file name

int main() { // Added main() function
    float payrate; // Fixed variable declaration syntax
    int hours;

    // Corrected printf statements
    printf("Enter your worked hours: ");
    scanf("%d", &hours);

    printf("Enter pay rate: ");
    scanf("%f", &payrate);

    // Fixed format specifiers and added missing semicolons
    printf("Your pay rate: %.2f, Worked hours: %d\n", payrate, hours);

    return 0; // Added return statement inside main
}
