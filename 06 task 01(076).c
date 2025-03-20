#include<stdio.h>
int main(){

int units;
float total ;

printf("Give the number of units:\n");
scanf("%d",&units);

if(units<=50){
    total=units*0.50;
    printf("total:%f",total);

    }

    else if(units <= 150){

    total =(50*0.50)+(( units-50)*0.75);
    printf("total:%f",total);

    }
    else if(units <= 250){

    total= (50*0.50)+(100*0.75)+((units-150)*1.20);
    printf("total:%f",total);

    }
  else {

    total=(50*0.50)+(100*0.75)+(100*1.20)+((units-250)*1.50);
    printf("total:%f",total);

    }
return 0;
}
