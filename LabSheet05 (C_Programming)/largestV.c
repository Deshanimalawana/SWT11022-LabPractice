#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    int largestV;
    if(a>b){
        if(a>c){
            largestV = a;
        }
        else{
            largestV = c;
        };
    }else{
        if(b>c){
            largestV = b;
        }
        else{
            largestV = c;
        };
    }
    printf("The largest value is %d",largestV);
    return 0;
}
