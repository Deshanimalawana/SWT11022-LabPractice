#include<stdio.h>
int main(){
    int a;
    int b;
    int c;

    printf("Enter Three Number :");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b){
        printf("The Largest Number is: %d\n",a);
    }
    else if(b>c){
        printf("The Largest Number is: %d\n",b);
    }
    else{
        printf("The Largest Number is: %d\n",c);
    }
    return 0;
}
