#include <stdio.h>

int main() {
    int oddnum = 1;

    while(oddnum <= 100) {
        printf("%d ", oddnum);
        oddnum += 2;
    }

    return 0;
}
