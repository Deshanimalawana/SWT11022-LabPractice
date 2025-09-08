#include<stdio.h>
int main(){

    int condition1 = 1;
    int condition2 = 0;
    int condition3 = 1;

    int result1 = condition1 && condition2;
    int result2 = condition1 || condition3;
    int result3 = !condition2;

    printf("result1: %s\n",result1 ? "true" : "false");
    printf("result2: %s\n",result2 ? "true" : "false");
    printf("result3: %s\n",result3 ? "true" : "false");

    return 0;

}
