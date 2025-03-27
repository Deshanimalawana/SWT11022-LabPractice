#include <stdio.h>

int gcd(int a, int b){
    if (b ==0){
          return a;}
    else{
        return gcd(b, a%b);}
}

int main(){
     int x, y;
     printf("enter the numbers : ");
     scanf("%d %d", &x,&y);

     int result = gcd(x , y);
     printf("the gcd of %d and %d is %d\n",x ,y, result);

     return 0;
}
