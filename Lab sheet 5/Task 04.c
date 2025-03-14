#include <stdio.h>
int main (){

     int a , b ,c ;

     printf("Enter the numbers:");
     scanf("%d %d %d", &a,&b,&c);

     if ((a>b) && (a>c)){
        printf("Largest Number is;%d", a);
        }
     else if (b>c){
        printf("Largest Number is;%d", b);
     }
     else {
        printf("Largest Number is;%d", c);
     }
     return 0;
}
