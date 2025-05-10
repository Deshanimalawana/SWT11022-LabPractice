#include<stdio.h>
int main(){
    int a,b,c;
    int largest;

    printf("Enter three numbers:",a,b,c);
    scanf("%d %d %d",&a,&b,&c);

    if (a> b && a >= c){
        largest = a;
    }
    else if (b >= a && b >= c){
        largest = b;
    }
    else {
        largest = c;
    }

    printf("The Largest Number is: %d",largest);
    return 0;
}
