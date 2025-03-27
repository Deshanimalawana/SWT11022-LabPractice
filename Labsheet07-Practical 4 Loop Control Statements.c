#include<stdio.h>
int main(){
int Number;

 for (Number=0;;Number++){
    if (Number % 2 ==0){
        break;
    }
 }
 printf("First Even Number Is :%d\n",Number);

 return 0;
}
