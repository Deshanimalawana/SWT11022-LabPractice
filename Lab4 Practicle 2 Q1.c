#include <stdio.h>

int main(){
    int conditiona1 = 1; //true
    int conditiona2 = 0; //false
    int conditiona3 = 1; //true

    int result1 = conditiona1 && conditiona2;
    int result2 = conditiona1 || conditiona3;
    int result3 = !conditiona2;

    printf("Result 1: %s\n", result1 ? "true" : "false");
    printf("Result 2: %s\n", result2 ? "true" : "false");
    printf("Result 3: %s\n", result3 ? "true" : "false");

    return 0;
}
