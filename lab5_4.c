#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("the lagest number%d",a);
        }else{
            printf("the lagest number%d",c);
        }
    }else{
        if(b>c){
            printf("the lagest number%d",b);
        }else{
            printf("the lagest number%d",c);
        }
    }

return 0;
}
