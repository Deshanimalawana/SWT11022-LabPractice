#include<stdio.h>
int main(){
int numbers[10];

    printf("Enter 10 integers: \n");
    for(int n=0; n<10; n++){

        printf("Enter number %d: ",n+1);
        scanf("%d",&numbers[n]);
    }

    printf("Reverse order: \n");

    for(int n=9; n>=0; n--){
        printf("%d ",numbers[n]);
    }

    printf("\n");

return 0;






}
