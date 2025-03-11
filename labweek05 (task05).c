#include <stdio.h>
int main (){

int num;
 printf("Enter the number:");
 scanf("%d",&num);

 if (num<0){
    printf("The number is negative");
 }
 else if (num>0){
    printf ("The number is Positive");
 }
 else {
    printf("The number zero");
 }
return 0;
}
