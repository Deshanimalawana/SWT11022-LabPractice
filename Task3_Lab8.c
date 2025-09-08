#include <stdio.h>
int GCD(int x,int y) {
if (y==0){
    return x;
}
    return GCD(y,x%y);
}
int main()
{
    int x,y;
    printf("Enter the number:");
    scanf("%d %d",&x,&y);
    printf("The GCD of %d and %d is:%d\n", x,y,GCD(x,y));


    return 0;
}
