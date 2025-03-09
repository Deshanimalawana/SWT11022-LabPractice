#include <stdio.h>


int main()
{
    int a = 10, b = 15, c = 20;
    int largestnumber;

    if(a>=b && a>=c) {
        largestnumber = a;
    } else if (b>=a && b>=c){
    largestnumber = b;
    }
    else {
        largestnumber = c;
    }

    printf("The largest number is:%d\n", largestnumber);
    return 0;
}
