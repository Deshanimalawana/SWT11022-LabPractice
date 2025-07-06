#include<stdio.h>

int sum(int z, int c){
    printf("%d\n%d",z,c);
//    return 0;
}
int main(){
int a=0,b=0;
printf("a: ");
scanf("%d",&a);

printf("b: ");
scanf("%d",&b);

printf("\n%d",sum(a,b));
return 0;
}




