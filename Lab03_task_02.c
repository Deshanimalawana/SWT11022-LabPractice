#include <stdio.h>

// Step 1: Declare constants using #define
#define SPEED_OF_LIGHT 299792458 // Speed of light in m/s
#define GRAVITY 9.81             // Acceleration due to gravity in m/s²
#define PLANCK_CONSTANT 6.626e-34 // Planck's constant in J·s

int main() {
    // Step 2: Declare constants using const
    const float BOLTZMANN_CONSTANT = 1.38e-23; // Boltzmann constant in J/K
    const int ABSOLUTE_ZERO = -273;           // Absolute zero in Celsius

    // Step 3: Print all constants
    printf("Fundamental Scientific Constants:\n");
    printf("Speed of Light: %d m/s\n", SPEED_OF_LIGHT);
    printf("Acceleration due to Gravity: %.2f m/s²\n", GRAVITY);
    printf("Planck's Constant: %.3e J·s\n", PLANCK_CONSTANT);
    printf("Boltzmann Constant: %.2e J/K\n", BOLTZMANN_CONSTANT);
    printf("Absolute Zero: %d °C\n", ABSOLUTE_ZERO);

    return 0;
}

