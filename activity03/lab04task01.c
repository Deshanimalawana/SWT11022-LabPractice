#include <stdio.h>
int main(){

    int a =10;
    int b =20;
    int c =30;

    int largest;
    if(a >=b && a>=c)
        {largest = a;}
    else if(b >=a&&b >=c){largest = b;}
    else{largest=c;}

    largest = (a >=b && a >=c) ?a : (b>= c ? b: c);
    printf("the largest number:%d\n",a,b,c, largest);

    float average = (a+b+c)/3.0;
    printf("the average:%.2f\n",a,b,c, average);
    return 0;
}
