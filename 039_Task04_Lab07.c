#include <stdio.h>


int main(){
   int number;
   while(1){
    printf("Enter a number :");
    scanf("%d",&number);
    if (number <0){
        break;
    }
   }
   return 0;
}
