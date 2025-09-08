#include<stdio.h>
int main()
{
    int a=15, b=20, c=3;
    int largest=(a>=b && a>=c) ? a:(b>=c && b>=c)? b:c;
    printf("The largest number: %d",largest);
    return 0;
}
