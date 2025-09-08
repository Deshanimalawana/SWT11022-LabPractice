#include <stdio.h>

int main() {
    int marks[5] = {98 , 85 , 45 , 65 , 78};

    // Print all marks
    for (int i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
