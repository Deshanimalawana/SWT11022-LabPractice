#include <stdio.h>

int main(){

    int condition1 = 1;
    int condition2 = 0;
    int condition3 = 1;

    int result1 =  condition1 && condition2;
    int result2 =  condition1 || condition3;
    int result3 = !condition2;

    printf("Result 1 : %s \n", result1 ? "True": "False");
    printf("Result 2 : %s \n", result2 ? "True": "False");
    printf("Result 3 : %s \n", result3 ? "True": "False");

    return 0;
}
