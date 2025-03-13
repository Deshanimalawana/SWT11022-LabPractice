#include <stdio.h>
int main (){

int a,b,c;

printf("Enter a number:");
scanf("%d",&a);

printf("Enter a number:");
scanf("%d",&b);

printf("Enter a number:");
scanf("%d",&c);

if (a>b && a>c) {
    printf("The largest number is %d",a);
    }
else if (b>a && b>c) {
    printf("The largest number is %d",b);
}
else {
    printf("The largest number is %d",c);
}
return 0;
}
