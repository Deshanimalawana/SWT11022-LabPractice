 #include <stdio.h>

int main() {
    int number = 1;

    while (number <= 100) {
        if (number % 2 != 0) {
            printf("%d,", number);
        }
        number++;
    }

    return 0;
}
