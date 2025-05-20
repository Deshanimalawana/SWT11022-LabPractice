
/*
#include <stdio.h>
void update(int*x){
       *x=100;
}
int main(){
   int a=5;
   update(&a);
   printf("%d",a);
   return 0;
}
*/

#include <stdio.h>
void swap(int*a,int*b) {
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
int num1=10,num2=20;
printf("Before swapping:\n");
printf("num1=%d,num2=%d\n",num1,num2);

swap(&num1,&num2);

printf("\nAfter swapping:\n");
printf("num1=%d,num2=%d\n",num1,num2);
return 0;
}
