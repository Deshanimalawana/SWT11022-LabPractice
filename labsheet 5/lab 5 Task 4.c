#include<stdio.h>

int main(){
    int a;
    int b;
    int c;
    printf("Enter value:");
    scanf("%d",&a);
    printf("Enter value:");
    scanf("%d",&b);
    printf("Enter value:");
    scanf("%d",&c);

    if(a > b && a > c){
        printf("The largest number is %d",a);
    }
    else if(b > a && b > c){
        printf("The largest number is %d",b);
    }
    else{
        printf("The largest number is %d",c);
    }
    return 0;


}
