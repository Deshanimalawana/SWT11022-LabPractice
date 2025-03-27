#include <stdio.h>
int prime(int num) {
      if (number<=1){
            return 0;}
      for(int i=2; i*i <=num; i++){
            if(num%i ==0){
            return 0;} }
}

int main(){
    int number;
    printf("enter the number :");
    scanf("%d",&number);

    if(prime(number)){
         printf("%d  is prime number.\n",number);}
    else{
          printf("%d  is not prime number.\n",number);} 

return 0;
}
