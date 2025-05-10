#include <stdio.h>
int main(){
    int conditipon1 =1; //true
    int conditipon2 =0; //false
    int conditipon3 =1; //true

    int result1 = conditipon1 && conditipon2;
    int result2 = conditipon1 || conditipon3;
    int result3 = !conditipon2;

    printf("Result 1: %s\n", result1 ? "true" : "false");
    printf("Result 2: %s\n", result2 ? "true" : "false");
    printf("Result 3: %s\n", result3 ? "true" : "false");

    return 0;
}
