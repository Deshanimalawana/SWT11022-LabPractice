#include<stdio.h>
int square(int num){
 return num*num;
}
int main(){
int number=5;
int result=square(number);
printf("the square of %d is %d",number,result);
return 0;
}
