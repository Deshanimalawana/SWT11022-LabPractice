#include <stdio.h>

int factorial(int n) {
   if(n<1) {
    return 1;
   }
   else {
    return n * factorial (n-1);
   }
}

int main() {
    int number=6;
    int facto=factorial(number);
    printf("%d! = %d",number,facto);

 return 0;


}
