#include<stdio.h>
int main () {
int num;
while(1){
printf("Enter a number:");
scanf("%d",&num);

if(num<0){
    printf("You entered Negative Number:%d\n",num);
    break;
}
}
return 0;
}
