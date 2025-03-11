#include <stdio.h>
int main(){
    int a = 10000;
    int b = 430;
    int c = 3000000;
    int d = 1;
    d = ((a>b) ? ((a>c) ? a : c):((b>c) ? b : c));
    printf("%d",d);
    return 0;
}


