#include<stdio.h>
int main(){
//variables
    int a=100;
    int b=75;
    int c=80;
// comparison operation
    int largest=(a>b && a>c)?a : (b>c)?b : c ;
 //print
    printf("The largest number is: %d\n",largest);
//avg
    float ave=(a+b+c)/3;
    printf("Average: %2f\n",ave);

return 0;

}
