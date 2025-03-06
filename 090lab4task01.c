#include <stdio.h>
int main(){

    int a ;
    int b ;
    int c ;

    printf("Enter three values: ");
    scanf("%d %d %d",&a, &b ,&c);

    int largest;
        if (a >= b && a >= c){
            largest = a;
        }
        else if (b >=a && b>=c){
            largest = b;
        }
        else {
            largest = c;
        }
    printf("largest number using comparison operator is: %d\n",largest);



    largest = (a>=b && a >=c) ? a:(b>= a && b >=c) ?  b : c;
    printf("largest number using ternary operator is: %d\n",largest);


    float average = (a+b+c)/3.0;
    printf("average of 3 number: %.2f",average);


    return 0;
}
