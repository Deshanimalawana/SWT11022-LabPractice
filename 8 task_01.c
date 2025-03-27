#include<stdio.h>

int isprime(int num){
     if (num<=2){
        return 1;
     }else{
     for
        (int i=2; i<=num/2; i++){
            if(num %2==0){
                return 0;
            }
     }


        }

}

int main (){
  int  number;
  printf("enter a number:");
  scanf("%d", &number);

  if (isprime (number)){
  printf("%d is a prime number. \n", number);
  }else {
  printf("%d is not a prime number.\n" , number);
}
return 0;
}

