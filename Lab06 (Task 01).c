#include <stdio.h>
int main(){

    int units,total;
    float rate;

    printf("Enter Number of units:");
    scanf("%d",&units);



    if(units<=50){
        total= units*0.50;
        printf("Total:Rs %d",total);

    }   else if(units<=150){
        total=units*0.75;
        printf("Total:%d",total);

    }  else if(units<=250){
        total=units*1.20;
        printf("Total:%d",total);

    }else{
        total=units*1.50;
        printf("Total:%d",total);
    }

    return 0;
}
