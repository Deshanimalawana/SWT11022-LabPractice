#include<stdio.h>
int main(){
int number;
printf("Enter age:");
scanf("%d",&number);
if(number<18) {
    printf("Not eligible to vate");
}
else {
    printf("Eligible to vate");
}
}
