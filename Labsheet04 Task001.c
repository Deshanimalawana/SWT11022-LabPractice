#include <stdio.h>
int main(){

    int a=10;
    int b=25;
    int c=20;

    int Largestnum = (a>b)? ((a>c)? a:c): ((b>c)? b:c);
    printf("The Largest number is: %d\n",Largestnum);

    float average= (a+b+c)/3.0;
    printf("The average of the three numbers is : %.2f\n", average);


return 0;
}
