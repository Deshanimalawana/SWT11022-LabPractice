#include <stdio.h>

int main() {
    
    int x = 12;
    int y = 25;

    
    int andResult = x & y;
    int orResult = x | y;
    int xorResult = x ^ y;

    
    printf("Bitwise AND result: %d\n", andResult);
    printf("Bitwise OR result: %d\n", orResult);
    printf("Bitwise XOR result: %d\n", xorResult);

    return 0;
}
