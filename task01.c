#include <Stdio.h>
int main(){
    int a = 15,b =30,c = 20;

    int largest = (a>b && a>c)? a : (b>a && b>c)? b: c;
    printf ("the largest number is %d\n", largest);

    float average = (a+b+c)/3.0;
    printf ("The average of the three number is : %.2f\n",average);

    return 0;

}
