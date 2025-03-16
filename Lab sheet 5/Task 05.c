#include<stdio.h>
int main(){
 int no;


    printf("enter number:");
    scanf("%d" , &no);

 if(no>0){
    printf("The number is positve:%d",no);
 }
 else if(no<0){
    printf("The number is negative:%d",no);
 }
 else{
    printf("The number is Zero:%d",no);
 }
}
