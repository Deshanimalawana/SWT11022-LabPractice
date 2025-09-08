#include <stdio.h>
int main(){
    int a,b,c;

    printf("Enter three numbers:");
    scanf("%d,%d,%d",&a,&b,&c);

    int largest;
    if(a>b && a>c){
        largest=a;
    }
    else if(b>a && b>c){
        largest=b;
    }
    else{
        largest=c;
    }
    printf("The largest number is: %d\n", largest);

    return 0;


}
