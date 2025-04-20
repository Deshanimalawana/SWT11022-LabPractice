#include <stdio.h>

int main(){
    int num[10];
    int numin;
    for(int i=0;i<10;i++){
        printf("Enter the Number:");
        scanf("%d",&numin);
        num[i]=numin;
    }
    //printing in reverse order.
    for(int a=9;a>=0;a--){
        printf("%d\n",num[a]);
    }
}
