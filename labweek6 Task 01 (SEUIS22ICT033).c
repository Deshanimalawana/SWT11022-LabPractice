#include <stdio.h>
int main (){

int units;
float price;

printf("input units:");
scanf("%d",&units);

if (units<=50){
    price=units*0.50;
    printf("price:%.2f\n",price);
}
else if(units<=150){
        price=((units-50)*0.75+(50*0.50));
        printf("price:%.2f\n",price);

}
else if(units<=250){
    price=((units-150)*1.20+(50*0.50)+(100*0.75));
    printf("price:%.2f\n",price);
}
else{
    price=((units-250)*1.50+(50*0.50)+(100*0.75)+(100*1.20));
    printf("price:%.2f\n",price);
}

return 0;
}
