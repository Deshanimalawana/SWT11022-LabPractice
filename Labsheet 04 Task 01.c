#include<stdio.h>

int main() {

    int a = 20;
    int b = 22;
    int c = 25;

    int Lnum = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);

    printf("Largest Value : %d\n",Lnum);

    float average = (a+b+c)/3.0;
    printf("Average = %.2f\n",average);

    return 0;

}
