#include <stdio.h>
int main(){

    int a=5 ;
    int b=12 ;
    int c=8 ;

    int agreaterthanb = (a>b);
    int agreaterthanc = (a>c);
    int bgreaterthanc = (b>c);

    int largest;
    largest = (a>=b && a>=c) ? a:(b>=a && b>=c) ?  b : c;
    printf("largest number is: %d\n",largest);

    float average = (a+b+c)/3.0;
    printf("average of 3 number: %.2f\n",average);


    return 0;
}
