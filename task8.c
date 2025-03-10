#include<stdio.h>
int main()
{
     int a=30, b=20, c=3;
     int largest;
     if(a>=b && a>=c){
        largest=a;
     }else if(b>=a && b>=c){
        largest=b;
        }else{
        largest=c;}
        printf("The largest number: %d",largest);
        return 0;

}
