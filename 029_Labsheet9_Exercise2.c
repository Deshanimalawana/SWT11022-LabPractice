#include<stdio.h>

void printstar(int n){

    for(int i=0 ; i<n ; i++){
        printf(" * ");
    }

}

int main(){

    int n;

    printf("Enter number : ");
    scanf("%d",&n);

    printstar(n);

    printf("\n\n");

return 0;
}



