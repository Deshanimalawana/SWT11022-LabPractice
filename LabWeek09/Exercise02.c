#include <stdio.h>

void printStars();

int main(){
    int n;
    printf("Stars numbers: ");
    scanf("%d",&n);
    printStars(n);
}

void printStars(int n){
    int a=0;
    printf("Number of Stars: %d\n",n);
    printf("Output:");
    while(a<n){
        printf("*");
        n-=1;
    }
}
