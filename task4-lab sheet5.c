#include<stdio.h>
int main(){

int a,b,c;

printf("Enter your first number:");

scanf("%d",&a);

printf("Enter your second number:");

scanf("%d",&b);

printf("Enter your third number:");

scanf("%d",&c);

if(a>b && a>c){
    printf("the largect number is %d\n",a);
}

else if(b>a && b>c){
    printf("the largect number is %d\n",b);
}

else{

    printf("the largest number is %d\n",c);
}



return 0;
}
