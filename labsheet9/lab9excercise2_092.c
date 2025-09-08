#include<stdio.h>

void printStars();

int main(){
 int num;
 printf("Example Input:\n");
 scanf("%d",&num);
 printStars(num);
 return 0;
 }

 void printStars(int n){
    for (int i=0; i<n; i++){
        printf("*");
    }
    printf("\n");
 }
