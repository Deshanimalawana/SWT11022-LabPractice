#include<stdio.h>
int main(){
    int a =10;
    int b =20;
    int c = 30;
    int largestnumber;

    largestnumber = (a>b)?(a>b ? a:c) : (b>c ? b:c);
    printf("Largest number:%d\n",largestnumber);

    return 0;
}
