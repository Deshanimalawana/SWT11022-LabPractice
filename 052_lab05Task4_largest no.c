#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        printf("The largest number is :%d\n ",a);
    }else if(b>c){
        printf("The largest number is :%d\n",b);
    }else{
        printf("The largest number is : %d\n",c);
    }
    return 0;
}
