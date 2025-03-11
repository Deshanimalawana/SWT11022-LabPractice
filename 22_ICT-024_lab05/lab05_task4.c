#include<stdio.h>

int main(){
int a;
int b;
int c;

printf("Enter three numbers: ");
scanf("%d %d %d", &a,&b,&c);

if (a>b && a>c){
    printf("%d is the big number", a);
}
else if (b>a && b>c){
    printf("%d is the big number", b);
}

else{
    printf("%d is the big number", c);
}

}
