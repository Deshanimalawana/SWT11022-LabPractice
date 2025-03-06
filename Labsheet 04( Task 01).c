#include <stdio.h>
int main(){

    int a = 10, b=  20, c=  30;
    int isGreaterThan = (a>b);
    int largest = (a>b) ? ((a>c) ? a:c): ((b>c)? b:c);
    printf("Largest number: %d\n", largest);

    float averange = (a+b+c)/3.0;

    printf("Average: %2f\n", averange);



    return 0;
}
