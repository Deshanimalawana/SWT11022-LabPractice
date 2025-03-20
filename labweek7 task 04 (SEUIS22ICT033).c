#include <stdio.h>
int main (){

int neg;

for(;;){
    printf("Enter negative number:");
    scanf("%d",&neg);
    if (neg<0){
        printf("you are entered a negative number");
        break;
    }
    }


return 0;
}
