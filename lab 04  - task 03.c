#include <stdio.h>
int main () {

    int cond1 = 1;
    int cond2 = 0;
    int cond3 = 1;

    int result1 = cond1 && cond2;
    int result2 = cond1 || cond3;
    int result3 = !cond2;

    printf("Result 1: %s\n",result1 ? "true" : "false");
    printf("Result 2: %s\n",result2 ? "true" : "false");
    printf("Result 3: %s\n",result3 ? "true" : "false");

    return 0;
}
