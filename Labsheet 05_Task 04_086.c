#include <stdio.h>
int main(){

    int a;
    int b;
    int c;
    printf("Enter Three No:");
    scanf("%d %d %d",&a,&b,&c);

    if((a>b)&&(a>c)){
        printf("The Largest number:%d",a);
    }

    else if((b>a)&&(b>c)){
        printf("The Largest number:%d",b);
    }
    else{
       printf("The Largest number:%d",c);
    }
return 0;

}
