#include<stdio.h>
int main () {
int number;
printf("Enter marks");
scanf("%d",&number);
if(number>90) {
    printf("Excellent");
   }
else if(number>75) {
    printf("Very Good");
   }
else if (number>50) {
    printf("Good");
   }
else {
    printf("Fail");
     }
}
