#include<stdio.h>
int main(){
int a=10,b=05,c=15;
int largest=(a>b&&a>c)?a:(b>c?b:c);
printf("The largest number %d,%d and %d is:%d\n",a,b,c,largest);

float average = (a+b+c)/3.0;
printf("The average is %d,%d and %d is:%.2f\n",a,b,c,average);
return 0;
}
