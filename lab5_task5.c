#include<stdio.h>
int main(){
    int n;
    printf("Enter number");
    scanf("%d",&n);
    if(n>0){
        printf("the number is positive");
    }else if(n<0){
        printf("tha number is negetive");
    }else{
        printf("tha number is zero");
    }
return 0;
}
