#include<stdio.h>
void printfstarts(int n){

    for(int i=0; i<n; i++){
        printf("*");
    }
};
int main()
{

    int n;
    printf("enter the number: ");
    scanf("%d",&n);

    printfstarts(n);

    return 0;
}


