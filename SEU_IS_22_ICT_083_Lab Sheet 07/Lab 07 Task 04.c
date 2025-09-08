#include <stdio.h>
int main(){
   int num;
   do {
    printf("Enter a positive number: ",num);
    scanf("%d",&num);
   } while (num<=0);
  printf("You entered a positive number: %d",num);
  return 0;

}
