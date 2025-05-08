#include <stdio.h>
int main(){

    int i;

    while(1){
        printf("Enter a number:");
        scanf("%d",&i);

        if (i<0){
            break;
        }
    }
    printf("You entered a negative number:%d\n",i);
    return 0;
}
