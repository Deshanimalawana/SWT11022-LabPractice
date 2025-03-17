#include <stdio.h>
int main () {
    int x;
    int y;
    int z;

    printf("Enter your number: ");
    scanf("%d",&x);
    printf("Enter your number: ");
    scanf("%d",&y);
    printf("Enter your number: ");
    scanf("%d",&z);

    if(x>y && x>z){
        printf("%d is largest",x);
    }else if(y>z && y>x){
        printf("%d is largest",y);
    }else{
        printf("%d is largest",z);
    }
}
