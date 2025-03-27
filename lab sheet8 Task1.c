#include <stdio.h>
int isprime (int num) {
   if(num<=2){
    return 1;
   }else{
   for
   (int i=2; i<=num/2; i++) {
       if (num %2==0) {
        return 0;
       }
   }

   }
}


int main(){
   int num;
   printf("Enter a number: ");
   scanf("%d" , &num);

   if (isprime) {
    printf("%d is a prime number\n", num);
   }
   else {
    printf("%d is not prime number\n", num);
   }
   return 0;
}






