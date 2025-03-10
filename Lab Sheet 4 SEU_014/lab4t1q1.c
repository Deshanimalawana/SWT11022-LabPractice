#include <stdio.h>
int main(){

    int a,b,c ;

    printf("Enter Value A :");
    scanf("%d",&a);
    printf("Enter Value B :");
    scanf("%d",&b);
    printf("Enter Value C :");
    scanf("%d",&c);

    int isGreaterThan =(a > b)? ((a > c) ? a : c) : ((b > c) ? b : c);
    int Average = (a + b +c)/3 ;
    printf("Largest number is %d \n",isGreaterThan);
    printf("Average : %d \n",Average);

    return 0;


}
