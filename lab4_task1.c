#include<stdio.h>
int main(){

//Declare three integer variables
    int a=10;
    int b=20;
    int c=15;

//largest number using comparison operators
    int largest= (a>b && a>c)?a : (b>c)?b : c ;

//Display
    printf("The largest number is: %d\n",largest);
//Average
    float average= (a+b+c)/3;
    printf("Average: %.2f\n",average);

return 0;
}
