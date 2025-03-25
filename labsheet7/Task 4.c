#include <stdio.h>
int main(){
    int number;
    printf("enter the number : ");


    while(1){
       scanf("%d",&number);
       if (number<0){
          printf("your number is negative");
          break ;}
    printf("entered number: %d\n",number);
    }

return 0;
}
