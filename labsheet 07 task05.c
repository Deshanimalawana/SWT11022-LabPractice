#include <stdio.h>

int main() {
    for(int evennum = 1; evennum <= 20; evennum++) {
        if(evennum % 2 != 0) {
            continue;
        }
        printf("%d ", evennum);
    }

    return 0;
}
