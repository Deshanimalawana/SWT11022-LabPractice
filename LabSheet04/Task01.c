#include<stdio.h>

int main(){
    int a = 10;
    int b = 12;
    int c = 18;

    int largestnumber;

    largestnumber=(a>b) ? (a>b ? a:c) : (a> c ? b : c);

    printf("largest numbe :%d\n",largestnumber);

    return 0;
}
