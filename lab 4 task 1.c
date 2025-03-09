#include<stdio.h>
int main(){
int a=10,b=25,c=15;
int Comparelargest=(a>b&&a>c)*a+(b>a&&b>c)*b+(c>a&&c>b)*c;
int turnaryLarge=(a>b)?((a>c)?a:c):((b>c)?b:c);
float Average=(a+b+c)/3.0;
printf("The largest number using comparition:%d\n",Comparelargest);
printf("The largest Number using turnary operation:%d\n",turnaryLarge);
printf("The Average number is:%.2f\n",Average);
return 0;
}
