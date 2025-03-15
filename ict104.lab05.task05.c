#include<stdio.h>
int main(){
    int num;
    printf("Enter Your Number: ");
     scanf("%d", &num);
     if(num>0){
        printf("The number is Positive");
     }
     else if(num<0){
         printf("The number is  Negative");
     }

     else{
         printf("The number is  Zero");
     }

return 0;

}
