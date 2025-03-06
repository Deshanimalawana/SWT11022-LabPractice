#include <stdio.h>
int main(){
int conditional=1 ;//true
int conditiona2=0 ;//false
int conditiona3=1 ;//true

int result1= conditional && conditiona2 ;
int result2= conditional || conditiona3 ;
int result3= !conditiona2;

printf("result 1:%s\n", result1 ? "true":"false");
printf("result 2:%s\n", result2 ? "true":"false");
printf("result 3:%s\n", result3 ? "true":"false");
return 0;

}
