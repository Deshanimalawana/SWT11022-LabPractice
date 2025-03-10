#include<stdio.h>
int main(){

    int x=5, y=3;

    int ANDresult = x & y;
    int ORresult = x | y;
    int NOTresult = x ^ y;

    printf("Bitwise AND (x & y):%d\n", ANDresult);
    printf("Bitwise OR (x | y):%d\n", ORresult);
    printf("Bitwise NOT (x ^ y):%d\n", NOTresult);

    return 0;
}
