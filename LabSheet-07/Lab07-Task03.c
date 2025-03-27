#include<stdio.h>
int main(){
    int nNum;

    do{
        printf("Enter Natural Number:");
        scanf("%d",&nNum);
    }
    while(nNum<=10);

    printf("This is Not a Natural Number %d\n",nNum);

    return 0;
}
