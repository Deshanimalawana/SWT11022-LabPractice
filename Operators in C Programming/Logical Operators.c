#include<stdio.h>
int main(){
    int condition01 = 1;
    int condition02 = 0;
    int condition03 = 1;

    int result01 = condition01 && condition02;
    int result02 = condition01 || condition03;
    int result03 = !condition01;

    printf("Result01:%s\n", result01 ? "true" : "false");
    printf("Result02:%s\n", result02 ? "true" : "false");
    printf("Result03:%s\n", result03 ? "true" : "false");

    return 0;
}
