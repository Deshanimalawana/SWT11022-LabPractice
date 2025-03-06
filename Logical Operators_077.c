#include <stdio.h>

int main()
{
    int conditionl = 1;
    int condition2 = 0;
    int condition3 = 1;

    int Result1 = conditionl && condition2;
    int Result2 = conditionl || condition3;
    int Result3 = !condition2;


    printf("Result1 : %s\n", Result1 ? "True" : "false");
    printf("Result2 : %s\n", Result2 ? "True" : "false");
    printf("Result3 : %s\n", Result3 ? "True" : "false");

    return 0;
}
