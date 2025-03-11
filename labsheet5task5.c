#include<stdio.h>
int main(){
 int number;

 printf("Enter a Number:");
 scanf("%d",&number);


 if (number>0){
    printf("The number is Positive");
 }
else if(number<0){
    printf("The number is Negative");

 }
else{
    printf("The number is Zero");
}

}
