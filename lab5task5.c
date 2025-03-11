#include<stdio.h>
int main(){
int marks;
printf("Enter your marks:");
scanf("%d",&marks);
 if (marks<=50){
    printf("Grade:Fail");
 }else if(marks<=74){
    printf("Grade:Good");
 }else if(marks<=89){
    printf("Grade:Very Good");
 }else{
    printf("Grade:Excellent");
 }
 return 0;
}
