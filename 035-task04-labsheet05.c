#include <stdio.h>
 int main(){
 int a,b,c ;
   printf("Enter the number");
   scanf ("%d %d %d", &a ,&b ,&c);

   if ( a>b && a>c) {
    printf ("The largest number is %d\n",a);
   }else if(b>a && b>c){
   printf ("The largest number is %d\n",b);
   }else if (c>a && c>b){
   printf ("The largest number is %d\n",c);
   }
   return 0 ;
 }
