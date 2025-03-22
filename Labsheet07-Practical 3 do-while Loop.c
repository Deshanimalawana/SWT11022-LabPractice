#include<stdio.h>
int main() {

int Numbr;

do {
    printf("Enter Your Psitive Number:");
    scanf("%d",&Numbr);
}while(Numbr <=0 );
printf("Your positive Number is:%d\n",Numbr);
return 0;
}
