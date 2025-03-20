#include <stdio.h>

int main(){
    int units,i;
    float Rate;
    float Bill;

    for(i=1;i<=10;i++){

    printf("Enter the unit no:");
    scanf("%d",&units);
    if(units<=50){
        Bill= units*0.50;
        printf("your bill is : %.2f\n",Bill);
    }else if(units<=150 ){
        Bill = (50*0.50)+((units-50)*0.75);
        printf("your bill is : %.2f\n",Bill);

    }else if (units<=250) {
        Bill = (50*0.50)+(100*0.75)+((units-150)*1.20);
        printf("your bill is : %.2f\n",Bill);
    } else{
        Bill = (50*0.50)+(100*0.75)+(100*1.20)+((units-250)*1.50);
        printf("your bill is : %.2f\n",Bill);
    }

    }
    return 0;
}

