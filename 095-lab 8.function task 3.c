

 #include <stdio.h>

// Function prototype
int gcd(int a, int b);

int main() {
    int num1, num2;

    // Asking the user for two numbers
    printf("Enter two numbers to find their GCD: ");
    scanf("%d %d", &num1, &num2);

    // Calculating and displaying the GCD
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));

    return 0;
}

// Recursive function to find the GCD using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0) {
        return a; // Base case: when b becomes 0, a is the GCD
    } else {
        return gcd(b, a % b); // Recursive case: GCD(a, b) = GCD(b, a % b)
    }
}
