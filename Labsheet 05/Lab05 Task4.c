#include <stdio.h>
int main(){
    int x,y,z;

    printf("Enter the three numbers:");
    scanf("%d %d %d",&x, &y, &z);



    if ((x>y)&&(x>z)){
        printf("Larger Number is:%d",x);
    }
    else if (y>z){
        printf("Larger Number is:%d", y);
    }
    else {
        printf("Larger Number is:%d", z);
    }

    return 0;
}
