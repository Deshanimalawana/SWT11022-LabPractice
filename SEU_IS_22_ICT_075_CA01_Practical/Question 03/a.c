#include <stdio.h>
int main(){
    float a,b;
    printf("Enter the 1st Value: ");
    scanf("%f",&a);
    printf("Enter the 2nd Value: ");
    scanf("%f",&b);

    printf("Added: %.2f\n",a+b);
    printf("Muliplied: %.2f\n", a*b);
    printf("Subtracted: %.2f\n",a-b);
    printf("Divided: %.2f\n", a/b);
}
