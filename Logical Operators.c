#include <stdio.h>
#include <stdlib.h>

int main()
{
    int condition1=1;//true
    int condition2=0;//false
    int condition3=1;//true

    int results1=condition1 && condition2;
    int results2=condition1 || condition3;
    int results3=!condition2;
    printf("results 1 : %s\n", results1? "true":"false");
    printf("results 2 : %s\n", results2? "true":"false");
    printf("results 3 : %s\n", results3? "true":"false");
    return 0;
}
