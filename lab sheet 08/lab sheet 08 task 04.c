#include<stdio.h>
int prime(int num){
        if(num<=1){
            return 1;
        }else
  for (int x = 2; x*x<= num; x++){
    if ( num% x == 0){
        return 0;
        }
          }
        return 1;
        }
int main(){
 int number;
 printf("Enter a Number:");
 scanf("%d",&number);

 if(prime(number)){
    printf("%d is Prime Number\n",number);
 }else{
    printf("%d is Not Prime Number\n",number);
 }
 return 0;
}


