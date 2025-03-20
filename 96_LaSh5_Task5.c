#include <stdio.h>
int main() {

   int a;
   printf("Enter your number: ");
   scanf("%d",&a);

   if(a==0) {
    printf("This is Zero\n");
   }
   else if(a>0) {
    printf("The number Positive\n");
   }
   else{
    printf("The number is Negative\n");
   }
   return 0;
}
