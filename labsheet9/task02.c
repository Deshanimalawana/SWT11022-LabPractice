#include<stdio.h>
void PrintStars(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    PrintStars(n);
    return 0;
}
void PrintStars(int n){
   for(int i=1; i<=n; i++){
    printf("*");
  }
}
