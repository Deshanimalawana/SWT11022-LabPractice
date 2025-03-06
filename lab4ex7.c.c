#include <stdio.h>


int main()
{
    int a = 5;
    int b = 3;
    int c = 4;

    int largernumber = (a>b && a>c) ? a:(b>c ? b:c);
    printf("The largest number %d, %d and %d  %d is:%d\n",a,b,b, largernumber);
    float average = (a+b+c)/3.0;
    printf("The average is %d, %d and %d is:%.2f\n:",a,b,c, average);
    return 0;
}
